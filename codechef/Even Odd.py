def sum_even_odd_digits(n):
    even_sum = 0
    odd_sum = 0
    for digit in str(n):
        digit = int(digit)
        if digit % 2 == 0:
            even_sum += digit
        else:
            odd_sum += digit

    return even_sum, odd_sum

n = int(input())

result = sum_even_odd_digits(n)
print(result[0], result[1])
