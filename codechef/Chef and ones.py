from os import *
from sys import *
from collections import *
from math import *

from typing import List


def consecutiveOnes(arr: List[int]) -> int:
    curr=0
    maxx=0
    for i in range(len(arr)):
        if arr[i]==0:
            maxx=max(maxx,curr)
            curr=0
        else:
            curr+=1
    maxx=max(curr,maxx)
    curr=0
    return maxx
    pass
