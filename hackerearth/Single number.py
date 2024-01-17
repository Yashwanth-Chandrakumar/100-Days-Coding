from sys import *
from collections import *
from math import *

def occursOnce(a, n):
    dic = {}
    for i in a:
        dic[i]= dic.get(i,0)+1
    for x,y in dic.items():
        if y==1:
            return x
            break
    pass
