class Solution:
    def countBits(self, n: int) -> List[int]:
        arr = []
        for i in range(n + 1):
            x = str(format(i, 'b'))
            arr.append(x.count("1"))
        return arr
