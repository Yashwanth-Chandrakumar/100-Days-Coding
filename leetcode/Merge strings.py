class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        s = ""
        for a,b in zip(word1,word2):
            s+=a+b
        if len(word1)<len(word2):
            s+=word2[len(word1):]
        if len(word2)<len(word1):
            s+=word1[len(word2):]
        return s
        
