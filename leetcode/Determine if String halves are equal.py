class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        a = sum(1 for char in s[0:len(s)//2] if char.lower() in 'aeiou')
        b = sum(1 for char in s[len(s)//2:len(s)] if char.lower() in 'aeiou')
        return a==b
        
        
