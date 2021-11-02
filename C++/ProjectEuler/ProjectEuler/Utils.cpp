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
	// First prime is 2
	std::vector<unsigned int> primeList{ 2 };

	// We know all prime numbers are odd except 2 so we can increment by 2
	for (unsigned int i = 3; i < index; i += 2)
	{
		// Number must not be divisible by a prime 
		for (auto prime : primeList)
		{
			if (i % prime == 0)
			{
				break;
			}
			else if (prime == primeList.back())
			{
				primeList.push_back(i);
			}
		}
	}
	return primeList.back();
}


/*
 * Populate vector up to Nth prime number
 */
void Utils::GetPrimeVecUpToNth(unsigned int lim, std::vector<unsigned int>& primeList)
{
	// first prime number is 2
	primeList.clear();
	primeList.push_back(2);

	// we know all prime numbers are odd except 2 so we can increment by 2
	for (unsigned int i = 3; i < lim; i += 2)
	{
		// Number must not be divisible by a prime 
		for (auto prime : primeList)
		{
			if (i % prime == 0)
			{
				break;
			}
			else if (prime == primeList.back())
			{
				primeList.push_back(i);
			}
		}
	}
}

/*
FIND NUMBER OF DIVISORS
pass int
iterate over number up to int to find if divisible
*/
unsigned int Utils::CalcNumDivisors(const int num)
{
	unsigned int numDivisors = 0;
	for (unsigned int i = 1; i < num + 1; ++i)
	{
		if (num % i == 0)
		{
			numDivisors += 1;
		}
	}
	return numDivisors;
}

void Utils::GetVecDivisors(const int num, std::vector<unsigned int>& vecDivisors)
{
	for (unsigned int i = 1; i < num + 1; ++i)
	{
		if (num % i == 0)
		{
			vecDivisors.push_back(i);
		}
	}
}