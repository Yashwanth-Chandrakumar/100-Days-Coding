def multiply(a, b, mod):
    return (
        (a[0]*b[0] + a[1]*b[2]) % mod, (a[0]*b[1] + a[1]*b[3]) % mod,
        (a[2]*b[0] + a[3]*b[2]) % mod, (a[2]*b[1] + a[3]*b[3]) % mod
    )

def power(matrix, exp, mod):
    result = (1, 0, 0, 1)  # Identity matrix
    while exp > 0:
        if exp % 2 == 1:
            result = multiply(result, matrix, mod)
        matrix = multiply(matrix, matrix, mod)
        exp //= 2
    return result

def fibonacci(n, mod):
    if n == 0:
        return 0
    matrix = (1, 1, 1, 0)
    result_matrix = power(matrix, n-1, mod)
    return result_matrix[0]

n = int(input())
result = fibonacci(n, 10**9 + 7)
print(result)
