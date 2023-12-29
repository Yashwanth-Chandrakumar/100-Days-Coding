from os import *
from sys import *
from collections import *
from math import *

'''
    This is signature of helper function 'knows'.
    You should not implement it, or speculate about its implementation.

    def knows(int A, int B); 
    Function 'knows(A, B)' will returns "true" if the person having
    id 'A' knows the person having id 'B' in the party, "false" otherwise.
'''

def findCelebrity(n, knows):
    a, b = 0, n - 1
    
    while a < b:
        if knows(a, b):
            a += 1
        else:
            b -= 1
    
    potential_celebrity = a
    
    for i in range(n):
        if i != potential_celebrity and (knows(potential_celebrity, i) or not knows(i, potential_celebrity)):
            return -1
    
    return potential_celebrity
  
    pass
