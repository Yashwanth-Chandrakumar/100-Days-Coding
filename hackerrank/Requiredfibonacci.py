from os import *
from sys import *
from collections import *
from math import *

def fibonacciNumber(n):
    c=0;
    a = [1,1];
    for i in range (2,n+1):
        a.append(a[i-1]+a[i-2])
    
    return a[n-1]%(10**9+7)
