n = int(input())
for i in range(n):
    a,b,c = map(int,input().split())
    print("PIZZA" if a>=b else "BURGER" if a>=c else "NOTHING")
