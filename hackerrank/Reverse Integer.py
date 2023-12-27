class Solution:
    def reverse(self, num: int) -> int:
        if num<0:
            rev = str(num)[1::]
            ans = '-'+ rev[::-1]
            return int(ans) if int(ans)>=(-2**31) else 0
        else:
            ans = str(num)[::-1]
            return int(ans) if int(ans)<=(2**31-1) else 0
        


        
