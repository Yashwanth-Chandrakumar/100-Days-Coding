for _ in range(int(input())):
    n = int(input())
    a = list(map(int,input().split()))
    if n==1:
        print(1)
        continue
    odd = sum(1 for x in a if x%2)
    print(odd%2+1)
    
