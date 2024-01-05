for _ in range(int(input())):
    s = input()
    x = sorted(s)
    cnt = 0
    a=1
    for i in x:
        cnt+=a*((ord(i)-ord("a"))+1)
        a+=1
    print(cnt)
