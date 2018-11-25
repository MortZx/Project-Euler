# -*- coding: utf-8 -*-
"""
Created on Sat Nov 24 10:00:33 2018

@author: MortZ

Project Euler Problem 3
"""

'''
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
'''


# return list of all prime factors of a positive integer
def primeFactors(n):
    pFactors = []
    d = 2
    while n > 1:
        while n % d == 0:
            pFactors.append(d)
            n /= d
        d = d + 1
    return pFactors



if __name__ == "__main__":
	print(primeFactors(600851475143))
