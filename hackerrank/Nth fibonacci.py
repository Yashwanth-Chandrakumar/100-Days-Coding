from math import *
from collections import *
from sys import *
from os import *

n = int(input())
mylist = [1,1]
for i in range(2,n):
    mylist.append(mylist[i-1]+mylist[i-2])

print(mylist[n-1])
