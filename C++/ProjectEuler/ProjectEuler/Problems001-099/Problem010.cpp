/*
=================
=   Problem 10   =	Summation of primes
==================

The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include "pch.h"
#include "Problems.h"
#include "Utils.h"

#include <vector>
#include <numeric>


/**
 * Problem 7 was finding the nth prime number
 * Edit it to sum the prime number
 *
 * @param n - Upper limit
 */
unsigned long long int Problem10(unsigned int n) 
{
	// first prime number is 2
	std::vector<unsigned int> primeList{ 2 };
	unsigned long long int sum = 2;

	// Iterate through all number to find the first n prime numbers and keeping track of the sum
	// We know all prime numbers are odd except 2 so we can increment by 2
	for (unsigned int i = 3; i < n; i += 2) 
	{
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
					sum += i;
				}
			}

		}
	}
	return sum;

	// Alternative simple but less efficient solution:
	primeList.clear();
	sum = 0;
	Utils::GetPrimeVecUpToNth(n, primeList);
	sum = std::accumulate(primeList.begin(), primeList.end(), (unsigned long long int)0);

	return sum;
}