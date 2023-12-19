for _ in range(int(input())):
    a = list(map(int,input().split()))
    p = a[-1]
    if (sum(a)-p)*p <= 24*5:
        print('No')
    else:
        print('Yes')
