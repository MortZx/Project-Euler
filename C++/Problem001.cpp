#include "pch.h"
#include "Problems.h"


/*
=================
=   Problem 1   =	Multiples of 3 and 5
==================

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

// Check if number is divisible by 3 or 5 and add to the sum
unsigned int problem1(unsigned int lim) {
	unsigned int ans = 0;
	for (size_t i = 0; i < lim; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			ans += i;
		}
	}
	return ans;
}