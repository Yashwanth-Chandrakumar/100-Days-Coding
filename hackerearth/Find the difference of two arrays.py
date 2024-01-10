class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        a=[]
        b=[]
        ans= []
        for i in nums1:
            if i not in nums2:
                a.append(i)
        for i in nums2:
            if i not in nums1:
                b.append(i)
        a=list(set(a))
        b=list(set(b))
        ans.append(a)
        ans.append(b)
        return ans
            
        
