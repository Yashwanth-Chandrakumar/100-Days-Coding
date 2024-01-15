from os import *
from sys import *
from collections import *
from math import *


def addFraction(a, b, c, d):
    numerator = (a * d) + (c * b)
    denominator = b * d
    common_divisor = gcd(numerator, denominator)
    
    simplified_numerator = numerator // common_divisor
    simplified_denominator = denominator // common_divisor
    
    return simplified_numerator, simplified_denominator
