class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        ans=-1
        for i in range(len(nums)):
            if sum(nums[0:i])==sum(nums[i+1:len(nums)]):
                ans=i
        return ans

        
