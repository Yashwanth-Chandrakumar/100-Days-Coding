for _ in range(int(input())):
    s = input()
    cnta = s.count('0')
    cntb = s.count('1')
    print ("Yes" if cnta==1 or cntb==1 else "No")
