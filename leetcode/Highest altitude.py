class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        arr= [0]
        prev=0
        for i in range(len(gain)):
            arr.append(gain[i]+arr[prev])
            prev+=1
        return max(arr)

        
