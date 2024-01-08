from math import *
from collections import *
from sys import *
from os import *

def majorityElementII(arr):
	n = len(arr)
	ans= n//3
	crr=[]
	brr = {}
	for i in arr:
		brr[i] = brr.get(i,0)+1
	for key,value in brr.items():
		if value>ans:
			crr.append(key)

	return crr 
	pass
