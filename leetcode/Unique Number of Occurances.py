class Solution:
    def uniqueOccurrences(self, ans: List[int]) -> bool:
        bns = {}
        for i in ans:
            bns[i] = bns.get(i,0)+1
        arr = []
        for key,values in bns.items():
            arr.append(values)
        for i in range(len(arr)):
            for j in range(i+1,len(arr)):
                if arr[i]==arr[j]:
                    return False
        return True


