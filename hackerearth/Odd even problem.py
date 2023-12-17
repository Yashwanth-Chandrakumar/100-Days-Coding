n = input()
se = 0
so = 0

for i in range(len(n)):
    digit = int(n[i])

    if digit % 2 == 0:
        se += digit
    else:
        so += digit

print(se, so, end=" ")
