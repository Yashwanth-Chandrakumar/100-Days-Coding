def kthSmallLarge(arr, n, k):
    arr.sort()
    kth_smallest = arr[k - 1]
    kth_largest = arr[-k]
    return kth_smallest, kth_largest
    pass
