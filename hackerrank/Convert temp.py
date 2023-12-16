from os import *
from sys import *
from collections import *
from math import *

def cnvt(a):
    z = (a-32) * 5/9
    print(a,floor(z) if z>0 else ceil(z),sep="\t",end="\n")

a = int(input())
b = int(input())
c = int(input())

while a<=b:
    cnvt(a)
    a+=c


























