# cook your dish here
n=int(input())
for i in range(n):
    c=0;
    a,b=list(map(int,input().split()))
    for i in range(0,a,2):
        for j in range(0,b,2):
            c+=1
    print(c)
