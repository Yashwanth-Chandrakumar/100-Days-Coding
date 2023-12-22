for _ in range(int(input())):
    n = int(input())
    s = input()
    ones = s.count('1')
    zeros = n - ones
    pairs = 2*min(ones,zeros)
    extra = min(abs(zeros - ones),1)
    print(pairs + extra)
