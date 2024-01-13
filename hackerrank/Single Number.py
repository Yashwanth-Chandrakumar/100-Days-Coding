class Solution(object):
    def singleNumber(self, nums):
        arr={}
        for i in nums:
            arr[i]=arr.get(i,0)+1
        for key,values in arr.items():
            if values==1:
                return key
                break

        
