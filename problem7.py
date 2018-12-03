# -*- coding: utf-8 -*-
"""
Created on Mon Dec  3 17:07:14 2018

@author: MortZ

Project Euler problem 7
"""


'''
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, 
we can see that the 6th prime is 13.

What is the 10 001st prime number?
'''


'''
'''
def findPrimeByIndex(n):
    primeList = [2]
    
    i = 1
    while len(primeList) < n:
        i += 1
        # iterate through primelist
        # check if divisible by all prime, if yes +1, 
        for prime in primeList:
            if i % prime == 0:
                break
            else:
                if prime == primeList[-1]:
                    primeList.append(i)
    
    return primeList[n-1]
    
    

if __name__ == "__main__":
    index = 10001
    print(findPrimeByIndex(index))