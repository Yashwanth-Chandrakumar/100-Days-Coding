def findPeakElement(arr: [int]) -> int:
    n = len(arr)

    def binary_search(left, right):
        if left == right:
            return left

        mid = (left + right) // 2

        if arr[mid] > arr[mid + 1]:
            return binary_search(left, mid)
        else:
            return binary_search(mid + 1, right)

    return binary_search(0, n - 1)
    pass
