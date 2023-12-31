class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        cnt=-1
        for i in range(len(s)):
            left=i
            right=len(s)-1
            while left<right:
                if s[left]==s[right]:
                    cnt = max(cnt,right-left-1)
                    break
                else:
                    right-=1
        return cnt
                

            
        
