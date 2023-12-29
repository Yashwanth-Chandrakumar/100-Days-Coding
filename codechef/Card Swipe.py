for _ in range(int(input())):
    a = int(input())
    stack=[]
    arr = list(map(int,input().split()))
    m=0
    for i in range(a):
        if not stack or arr[i] not in stack:
            stack.append(arr[i])
        else:
            stack.remove(arr[i])
        m = max(m,len(stack))
    print(m)
            
    
