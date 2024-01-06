def is_powerful(x, s):
            return x % 10**len(s) == int(s) and all(int(digit) <= limit for digit in str(x))

        count = 0
        for x in range(start, finish + 1):
            if is_powerful(x, s):
                count += 1

        return count
