t=int(input())
for _ in range(t):
    n,a=map(int,input().split())
    print(min(a,n-a))
