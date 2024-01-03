# cook your dish here
d = {}
list=[]
n1,n2,n3 = map(int,input().split())
sum = n1+n2+n3
for i in range(sum):
    x = int(input())
    d[x] = d.get(x,0)+1
for x in d:
    if d.get(x)>=2:
        list.append(x)
print(len(list))        
for x in sorted(list):
    print(x)

        
    
    
