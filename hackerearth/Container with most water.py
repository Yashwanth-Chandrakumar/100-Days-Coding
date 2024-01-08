class Solution:
    def maxArea(self, height: List[int]) -> int:
        n = len(height)
        left=0
        right=n-1
        volume=0
        while(left<right):
            water = min(height[left],height[right])
            diff = right-left
            volume=max(water*diff,volume)
            if height[left]<height[right]:
                left+=1
            else:
                right-=1
        return volume
        
