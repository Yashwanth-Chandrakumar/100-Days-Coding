class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        ans=set()
        for i in range(n-2):
            second = i+1
            third = n-1
            while(second<third):
                sum = nums[i]+nums[second]+nums[third]
                if(sum<0):
                    second+=1
                elif(sum>0):
                    third-=1
                else:
                    ans.add((nums[i],nums[second],nums[third]))
                    second+=1
                    third-=1
        return ans
