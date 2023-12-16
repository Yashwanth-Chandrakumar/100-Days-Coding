a = int(input())

for _ in range(a):
    n = int(input())
    cnt=0
    m=52
    while m%n!=0:
        m-=1
        cnt+=1
        
    print(cnt)
