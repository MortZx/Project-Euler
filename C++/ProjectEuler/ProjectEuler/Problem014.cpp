#include "pch.h"
#include "Problems.h"
#include "Utils.h"


/*
=================
=   Problem 14   =	Largest Collatz sequence
==================

The following iterative sequence is defined for the set of positive integers:

n ? n/2 (n is even)
n ? 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:

13 ? 40 ? 20 ? 10 ? 5 ? 16 ? 8 ? 4 ? 2 ? 1
It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. 
Although it has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.
*/


unsigned int problem14(const unsigned int maxLim)
{
	unsigned int maxStartVal = 2;
	unsigned int maxTermsInChain = 1;

	// test all numbers
	for (unsigned int i = 2; i <= maxLim; i++)
	{
		// start running the sequence until we reach a value of 1
		unsigned int currentTermsInChain = 1;
		unsigned int num = i;

		while (num != 1)
		{
			if (Utils::IsDivisibleBy(num, 2))
			{
				num /= 2;
			}
			else
			{
				num = 3 * num + 1;
			}

			// keep track of our sequence counter
			currentTermsInChain++;
		}

		// keep track of the longest sequence and our starting value
		if (currentTermsInChain > maxTermsInChain)
		{
			maxTermsInChain = currentTermsInChain;
			maxStartVal = i;
		}
	}

	return maxStartVal;
}