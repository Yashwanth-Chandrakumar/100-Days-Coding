def sortedArray(a: [int], b: [int]) -> [int]:
    for i in b:
        a.append(i)
    return list(set(a))
    pass
