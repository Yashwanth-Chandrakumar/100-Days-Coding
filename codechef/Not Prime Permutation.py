
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    if n<=2:
        print(-1)
    else:
        ind1=a.index(1)
        ind2=a.index(3)
        a[ind1],a[ind2]=a[ind2],a[ind1]
        print(*a)
   
        
    
