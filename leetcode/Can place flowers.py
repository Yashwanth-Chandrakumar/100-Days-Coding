class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        if n == 0:
            return True
        flowerbed.append(0)
        k = 0
        i = 0
        while i < len(flowerbed)-1:
            if flowerbed[i+1] == 0:
                if flowerbed[i] == 0:
                    k += 1
                    if k == n:
                        return True

                i += 2
            else:
                i += 3
        
        return False

        
