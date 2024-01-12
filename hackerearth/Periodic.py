from os import *
from sys import *
from collections import *
from math import *

def isPeriodic(s):
    n = len(s)
    
    for i in range(1, n // 2 + 1):
        if n % i == 0:
            period = s[:i]
            
            if period * (n // i) == s:
                return True
    
    return False
