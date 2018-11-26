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
    assert n >= 2, "A positive integer bigger than 1 should be passed"
    pFactors = []
    isPrime = 2
    while n > 1:
        if n % isPrime == 0:
            pFactors.append(isPrime)
            n /= isPrime
        isPrime += 1
    return pFactors




if __name__ == "__main__":
	print(primeFactors(-2))
