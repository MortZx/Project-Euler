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


'''


@param 
@return 
'''
def divisibleByAll(n):
    flag = False
    i = 0
    while flag == False:
        i += 1
        for x in range(1, n+1):
            if i % x != 0:
                 break 
            if x == n:
                flag = True
    return i


if __name__ == "__main__":
	print(divisibleByAll(10))
