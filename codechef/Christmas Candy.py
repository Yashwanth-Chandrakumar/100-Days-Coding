for _ in range(int(input())):
    b=int(input())
    l=list(map(int,input().split()))
    
    x=0
    max1=l[0]
    for i in range(1,len(l)):
        if l[i]<max1:
            x=x+1
        else:
            max1=l[i]
    print(x)     
