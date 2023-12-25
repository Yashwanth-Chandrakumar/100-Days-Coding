class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mypair = []
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if nums[i]+nums[j]==target:
                    mypair.append(i)
                    mypair.append(j)
                    break

        return mypair
