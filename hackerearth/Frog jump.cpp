#include <bits/stdc++.h> 
int frogJump(int n, vector<int> &stairs)
{

    if (n <= 2) {
        return 0;
    }

    vector<int> dp(n, 0);
    dp[1] = abs(stairs[1] - stairs[0]);

    for (int i = 2; i < n; ++i) {
        int jump1 = dp[i - 1] + abs(stairs[i] - stairs[i - 1]);
        int jump2 = dp[i - 2] + abs(stairs[i] - stairs[i - 2]);
        dp[i] = min(jump1, jump2);
    }

    return dp[n - 1];
}
