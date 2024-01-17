for i in range(int(input())):
    n=int(input())
    l=list(map(int,input().split()))
    count=1
    l1=[]
    for j in range(n-1):
        if((l[j+1]-l[j])<=2):
            count+=1
        else:
            l1.append(count)
            count=1
    l1.append(count)
    print(min(l1),max(l1))
