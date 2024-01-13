# cook your dish here
for i in range(int(input())):
    n=int(input())
    x=list(map(int,input().split()))
    t=0
    t+=2*x[0]
    s=x[0]
    if len(x)==1:
        print(2*x[0])
    else:
        for  i in range(n-2):
            s+=x[i+1]
            if t>s:
                t+=x[i+1]
            else:
                t=t+x[i+1]+(s-t)
        print(t)
