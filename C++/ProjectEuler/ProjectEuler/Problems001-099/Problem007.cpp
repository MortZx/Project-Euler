#include "pch.h"
#include "Problems.h"
#include "Utils.h"
#include <vector>

using std::vector;

/*
=================
=   Problem 7   =	10001st prime
==================


By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/


/*
Incrementally check if the current number is evenly divisible by the current
list of prime numbers. If not, add to the list of prime numbers until the nth
specified prime number is found
*/
unsigned int problem7(unsigned int index) 
{
	return Utils::GetNthPrimeNumber(index);
}
