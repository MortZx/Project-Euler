# -*- coding: utf-8 -*-
"""
Created on Mon Nov 30 23:23:23 2018

@author: MortZ

Project Euler Problem 5
"""


'''
2520 is the smallest number that can be divided by each of the numbers from
 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the 
numbers from 1 to 20?
'''

from timeit import default_timer as timer


'''
Iterate through numbers, for each number test divisible for all n specified 
numbers in an iterated manner unless division has a remainder. 

@param integer - range of numbers that can evenly divide a number
@return integer - smallest positive number evenly divisible by all n range
'''
# Could also use a while True loop and break when x == n.
# !! Can add a time limit or memory limit to prevent infinite code !!
def divisibleByAll(n):
    assert n >= 1, "A positive integer bigger than 0 should be passed!"
    flag = False
    i = 0
    try:
        while flag == False:
            i += 1
            for x in range(1, n+1):
                if i % x != 0:
                     break 
                if x == n:
                    flag = True
        return i
    except (TypeError):
        raise TypeError ("A positive integer bigger than 1 should be passed")


if __name__ == "__main__":
    start = timer()
    evenlyDivisibleRange = 20
    print(divisibleByAll(evenlyDivisibleRange))
    end = timer()
    print(end - start)
