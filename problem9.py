# -*- coding: utf-8 -*-
"""
Created on Wed Dec  5 23:19:16 2018

@author: MortZ

Project Euler Problem 9
"""


'''
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
                    a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
'''

import math

'''
'''
def pythagoreanTriplet(lim):
    a = 1
    c = 0
    
    for a in range(1, lim):
        # keep condition a < b true
        b = a + 1
        
        for b in range (a+1, lim+1):
            c = math.sqrt(a**2 + b**2)
            
            # c must be a float
            if c.is_integer():
                if b < c:
                    return c
        
        


if __name__ == "__main__":
    lim = 1000
    print(pythagoreanTriplet(lim))