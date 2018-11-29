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


'''
Starting with prime number 2, divide n by number if result is whole,
increment until all numbers (up to n) are checked

@param integer - find all its prime factors
@return list of all prime factors 
'''
def primeFactors(n):
    assert n >= 2, "A positive integer bigger than 1 should be passed!"
    pFactors = []
    isPrime = 2
    try: 
        while n > 1:
            if n % isPrime == 0:
                pFactors.append(isPrime)
                n /= isPrime
            isPrime += 1
        return pFactors
    except (TypeError):
        raise TypeError ("A positive integer bigger than 1 should be passed")


if __name__ == "__main__":
	print(primeFactors(-3))
