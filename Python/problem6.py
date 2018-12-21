# -*- coding: utf-8 -*-
"""
Created on Sun Dec  2 15:54:25 2018

@author: MortZ

Project Euler Problem 6
"""


'''
The sum of the squares of the first ten natural numbers is,
        1^2 + 2^2 + ... + 10^2 = 385

The square of the sum of the first ten natural numbers is,
        (1 + 2 + ... + 10)^2 = 55^2 = 3025

Hence the difference between the sum of the squares of the first ten natural 
numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred 
natural numbers and the square of the sum.
'''


'''
Sum of the squarwes of the n specified natural numbers
@param integer - range 0 to n of natural numbers
@return integer - sum of squares of range provided
'''
def sumOfSquares(n):
    return sum(i**2 for i in range(n+1))
    

'''
Square of the sum of the n specified natural numbers
@paran integer - range 0 to n of natural numbers
@return integer - square of sum of range provided
'''
def squareOfSum(n):
    sumNum = sum(i for i in range(n+1))
    return sumNum**2


'''
Differ
@param integer - range 0 to n of natural numbers
@return integer - difference between square of sum and sum of square of range provided
'''
def sumSquareDiff(n):    
    assert isinstance(n, int), "An integer should be passed!"
    return squareOfSum(n) - sumOfSquares(n) 
    


if __name__ == "__main__":
    naturalNumRange = 100
    print(sumSquareDiff(naturalNumRange))

