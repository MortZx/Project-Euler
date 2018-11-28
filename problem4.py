# -*- coding: utf-8 -*-
"""
Created on Mon Nov 26 19:17:07 2018

@author: MortZ
"""


'''
A palindromic number reads the same both ways. The largest palindrome made from 
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
'''


'''
Finds the largest palindrome made from the product of two n-digit specific
numbers. Iterate through all possible numbers and save all palindroms in a list. 
!! appending to list is costly !!

@param integer - number of digits for multiplied numbers
@return integer - largest palindrome of the product of two n digit numbers
'''
def maxPalindrom(n):
    minNum = 10**(n-1)
    maxNum = 10**(n) 
    palindroms = []
    for i in range(minNum, maxNum):
        for x in range (minNum, maxNum):
            if (str(i*x) == str(i*x)[::-1]):    # [::-1] reverses a string
                palindroms.append(i*x)
    return max(palindroms)

def maxPalindrom2(n):
    minNum = 10**(n-1)
    maxNum = 10**(n) 
    palindrom = max(i*x
                    for i in range(minNum, maxNum)
                    for x in range (minNum, maxNum)
                    if (str(i*x) == str(i*x)[::-1])
                    )
    return palindrom


if __name__ == "__main__":
	print(maxPalindrom2(2))
