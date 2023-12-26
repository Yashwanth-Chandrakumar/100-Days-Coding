class Solution:
    def checkValidString(self, s: str) -> bool:
        n = len(s)
        dp = [[False] * (n + 1) for _ in range(n + 1)]
        dp[0][0] = True

        for i in range(1, n + 1):
            for j in range(n + 1):
                if s[i - 1] == '(':
                    dp[i][j] = dp[i - 1][j - 1] if j > 0 else False
                elif s[i - 1] == ')':
                    dp[i][j] = dp[i - 1][j + 1] if j < n else False
                elif s[i - 1] == '*':
                    dp[i][j] = dp[i - 1][j - 1] or dp[i - 1][j] or (dp[i - 1][j + 1] if j < n else False)

        return dp[n][0]

        
