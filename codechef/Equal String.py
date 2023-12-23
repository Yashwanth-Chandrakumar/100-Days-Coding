for i in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    s=set()
    for i in range(n):
        if a[i]!=b[i]:
            s.add(b[i])
    print(len(s))
