/*
=================
=   Problem 1   =	Multiples of 3 and 5
==================

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include "pch.h"
#include "Utils.h"

#include <iostream>


// Check if number is divisible by 3 or 5 and add to the sum
int problem1(int lim) 
{
	unsigned int ans = 0;

	if (Utils::IsDivisibleBy(lim, 3))
	{
		ans += 3;
	}
	
	if (Utils::IsDivisibleBy(lim, 5))
	{
		ans += 5;
	}

	return ans;
}