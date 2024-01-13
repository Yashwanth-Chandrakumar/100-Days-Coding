from os import *
from sys import *
from collections import *
from math import *

def findSimilarity(arr1, arr2, n, m):
    set1 = set(arr1)
    set2 = set(arr2)

    common_elements = set1.intersection(set2)
    union_elements = set1.union(set2)

    return len(common_elements), len(union_elements)
    pass
