# cook your dish here
for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    s=[]
    for i in range(n-1):
        if l[i]!=l[i+1]:
            s.append(i)
            s.append(i+1)
    print(len(set(s)))
