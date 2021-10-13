/*
=================
	Utilities - 
==================

Useful functions compiled from problem solutions.
*/

#include "pch.h"
#include "Utils.h"

bool Utils::IsDivisibleBy(int num, int divideBy)
{
	if (num % divideBy == 0)
	{
		return true;
	}
	return false;
}


void Utils::GetFibonacciSequenceUpTo(const unsigned int lim, std::vector<unsigned int>& vecFib)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int next = 0;

	while (a <= lim)
	{
		vecFib.push_back(a);

		// Increase our Fibonnaci sequence
		next = a + b;
		a = b;
		b = next;
	}
}


void Utils::GetFirstXFibonacciSequence(const unsigned int lim, std::vector<unsigned int>& vecFib)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int next = 0;

	while (vecFib.size() <= lim)
	{
		vecFib.push_back(a);

		// Increase our Fibonnaci sequence
		next = a + b;
		a = b;
		b = next;
	}
}


/*
Incrementally check if the current number is evenly divisible by the current
list of prime numbers. If not, add to the list of prime numbers until the nth
specified prime number is found
*/
unsigned int Utils::GetNthPrimeNumber(unsigned int index)
{
	std::vector<unsigned int> primeList{ 2 };
	unsigned int i = 1;

	while (primeList.size() < index) {
		i += 1;
		// iterate through prime list
		// check if divisible by all prime, if yes +1
		for (auto prime : primeList) 
		{
			if (i % prime == 0) 
			{
				break;
			}
			else 
			{
				if (prime == primeList.back()) 
				{
					primeList.push_back(i);
				}
			}
		}
	}
	return primeList.back();
}