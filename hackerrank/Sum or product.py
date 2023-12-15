from os import *
from sys import *
from collections import *
from math import *



def sumOrProduct(n, q):

    product = 1       

    if q==1:        
        add = int(n * ( n + 1 ) / 2)       
        return add    

    else:        

        for i in range( 1 , n + 1 ):            
            product = ( product * i) % 1000000007        
        return product 

