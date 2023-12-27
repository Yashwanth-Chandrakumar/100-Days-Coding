n=int(input())
r=list(map(int,input().split()))
r=set(r)
result=""
for ele in range(1,n+1):
    if ele not in r:
        result+=f'{ele} '
print(result)
