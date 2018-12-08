# -*- coding: utf-8 -*-
"""
Created on Fri Dec  7 12:13:29 2018

@author: MortZ

Project Euler Problem 10
"""


'''
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
'''


'''
Problem 7: find prime by index, edit to return the list of primes in a range
@param integer - prime numbers below value given
@return list integer - list of prime numbers
'''
def findPrimeBelowN(n):
    assert n >= 1, "A positive intger should be passed!"
    primeList = [2]
    
    for i in range(2, n):
        for prime in primeList:
            if i % prime == 0:
                break
            else:
                if prime == primeList[-1]:
                    primeList.append(i)
    
    return primeList


'''
@param integer - prime numbers below value given
@return integer - sum of prime numbers
'''
def sumPrimes(n):
    return sum(findPrimeBelowN(n))


if __name__ == "__main__":
    n = 2000000
    print(sumPrimes(n))