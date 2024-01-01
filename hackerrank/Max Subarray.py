class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        n = len(nums)
        if n < k:
            return 0 
        current_sum = sum(nums[:k])
        max_average = current_sum / k

        for i in range(k, n):
            current_sum += nums[i] - nums[i - k] 
            max_average = max(max_average, current_sum / k)

        return max_average
