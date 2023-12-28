
for _ in range(int(input())):
    n=int(input())
    ls=[int(x) for x in input().split()]
    ls.sort()
    i=0
    j=len(ls)-1
    s=0
    while i<j:
        s=s+abs(ls[i]-ls[j])
        i=i+1 
        j=j-1 
    print(s)
