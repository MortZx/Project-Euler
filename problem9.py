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
@param integer - result for condition: a + b + c = result
@return float - product of abc for above condition and a^2 + b^2 = c^2
'''
def pythagoreanTriplet(lim):
    # no solution for lim < 5
    assert lim >= 5, "number of adjacent numbers to consider must be equal or greater than 5!"  
    
    a = 1.0         # must be a float for sqrt(c) to be a float
    c = 0
    for a in range(1, lim):     #!! range can be reduced in case of no solution
        for b in range (a+1, lim+1):    #!! range can be reduced in case of no solution
            c = math.sqrt(a**2 + b**2)
            
            if (c.is_integer() and b<c and a+b+c==lim):
                return a*b*c
            
            # Warn if no solution found
            if a == lim-1 and b == lim:
                print("No solution found.")


if __name__ == "__main__":
    lim = 1000
    print(pythagoreanTriplet(lim))