class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        arr=[]
        for i in candies:
            if i+extraCandies >= max(candies):
                arr.append(True)
            else:
                arr.append(False)
        return arr
        
