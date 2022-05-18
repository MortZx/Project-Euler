/*
=================
=   Problem 3   =	Largest prime factor
==================

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include "pch.h"
#include "Problems.h"
#include "Utils.h"

#include <vector>


/**
 * Find prime factors from smallest to largest
 *
 * @param[in] lim - Upper limit
 */
unsigned int Problem3(unsigned long long int num) 
{
	std::vector<unsigned int> pFactors;
	unsigned int isPrime{ 2 };

	while (num > 1) 
	{
		if (num % isPrime == 0) 
		{
			pFactors.push_back(isPrime);
			num /= isPrime;
		}
		isPrime += 1;
	}
	return pFactors.back();
}
