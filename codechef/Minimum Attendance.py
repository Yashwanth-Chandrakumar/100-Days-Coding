# cook your dish here
n = int(input())

for i in range(n):
    a = int(input())
    b = input()
    count=0;
    for char in b:
        if char=='1':
            count+=1
    
    total = count+(120-a)
    per = (total*100)/120
    if per>=75:
        print("YES")
    else:
        print("NO")
