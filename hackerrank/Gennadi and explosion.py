n = input()
m= input()

while m in n:
    n= n.replace(m,"")

print(n if n!="" else "FRULA")
