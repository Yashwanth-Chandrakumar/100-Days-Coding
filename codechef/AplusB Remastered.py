for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    
    l = []
    b.sort(reverse=True)
    a.sort()
    
    for i in range(len(a)):
        for j in range(i,len(b)):
            s = a[i]+b[j]
            break
        l.append(s)
    ans = list(set(l))
    if len(ans) == 1:
        print(*a)
        print(*b)
    else:
        print(-1)
            
