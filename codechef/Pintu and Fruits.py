# cook your dish here
for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    freq={}
    i=0
    for x in a:
        if x in freq:
            freq[x]+=b[i]
        else:
            freq[x]=b[i]
        i+=1
    print(min(freq.values()))
        
    
