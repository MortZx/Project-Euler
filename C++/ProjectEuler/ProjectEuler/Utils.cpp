/*
=================
	Utilities - 
==================

Useful functions compiled from problem solutions.
*/

#include "pch.h"
#include "Utils.h"


/*
 * Returns true when dividing two numbers with remainder 0
 */
bool Utils::IsDivisibleBy(int num, int divideBy)
{
	if (num % divideBy == 0)
	{
		return true;
	}
	return false;
}


/*
 * Stores the Fibonacci numbers up to a max value
 */
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


/*
 * Stores the first X Fibonacci numbers 
 */
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

/**
 * (1 + 2 + ... )^2 =
 */
unsigned int Utils::SquareOfSum(unsigned int naturalNumRange)
{
	unsigned int sumNum = 0;
	for (unsigned int i = 0; i < naturalNumRange + 1; ++i)
	{
		sumNum += i;
	}
	return static_cast<unsigned int>(pow(sumNum, 2));
}

/**
 * 1^2 + 2^2 + ...
 */
unsigned int Utils::SumOfSquares(unsigned int naturalNumRange)
{
	unsigned int sumPow = 0;
	for (unsigned int i = 0; i < naturalNumRange + 1; ++i)
	{
		sumPow += static_cast<unsigned int>(pow(i, 2));
	}
	return sumPow;
}


/*
 * Incrementally check if the current number is evenly divisible by the current list of prime numbers.
 * If not, add to the list of prime numbers until the nth specified prime number is found.
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
 * How many numbers can a number be divided by? Division must result in whole number, no decimals
 * Iterate between 1 and num checking if divisible with no remainder
 */
unsigned int Utils::CalcNumDivisors(const int num)
{
	unsigned int numDivisors = 0;
	for (int i = 1; i < num + 1; ++i)
	{
		if (num % i == 0)
		{
			numDivisors += 1;
		}
	}
	return numDivisors;
}


/*
 * Store all divisors of a number
 * See Utils::CalcNumDivisors(..)
 */
void Utils::GetVecDivisors(const int num, std::vector<unsigned int>& vecDivisors)
{
	for (int i = 1; i < num + 1; ++i)
	{
		if (num % i == 0)
		{
			vecDivisors.push_back(i);
		}
	}
}