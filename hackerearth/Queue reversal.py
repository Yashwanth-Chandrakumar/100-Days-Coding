from os import *
from sys import *
from collections import *
from math import *
from queue import Queue
def reverseQueue(q):
    stack = []
    
    while not q.empty():
        stack.append(q.get())
    while stack:
        q.put(stack.pop())

    return q
    pass
