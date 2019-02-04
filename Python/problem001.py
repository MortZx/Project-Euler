# -*- coding: utf-8 -*-
"""
Created on Fri Nov 23 12:15:26 2018

@author: MortZ

Project Euler Problem 1
"""

"""
If we list all the natural numbers below 10 that are multiples of 3 or 5, 
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
"""

from timeit import default_timer as timer

# Check if number is divisible by 3 or 5 and add to the sum
def compute():
    ans = sum(i for i in range(1000) if (i % 3 == 0 or i % 5 == 0))
    return ans
    

if __name__ == "__main__":
    start = timer()
    print(compute())
    end = timer()
    print(end - start)