class Solution:
    def trap(self, nums: List[int]) -> int:
        n = len(nums)
        left=0
        right = n-1
        lmax = -1
        rmax=-1
        ans=0
        while(left<right):
            lmax = max(lmax,nums[left])
            rmax = max(rmax,nums[right])
            ans += lmax - nums[left] if lmax < rmax else rmax - nums[right]
            left += 1 if lmax < rmax else 0
            right -= 1 if lmax >= rmax else 0
        return ans
