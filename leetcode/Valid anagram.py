class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        mymap={}
        for char in s:
            mymap[char] = mymap.get(char,0)+1
        
        for i in t:
            mymap[i] = mymap.get(i,0)-1
        
        for i in mymap.values():
            if i!=0:
                return False
        
        return True
        
