
def lis(arr):
    if len(arr) == 0:
        return 0
    l = [arr[0]]
    
    for element in arr[1:]:
        left, right = -1, len(l)

        while right - left > 1:
            mid = (left + right)//2
            if k*l[mid]+b <= element:
                left = mid
            else:
                right = mid

        if right == len(l):
            l.append(element)
        else:
            l[right] = min(l[right], element)
    
    return len(l)

for _ in range(int(input())):
    N, k, b = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    print(lis(a))
