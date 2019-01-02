#include "pch.h"
#include "Problems.h"

#include <math.h>
#include <cmath>
#include <iostream>

using std::pow;

/*
=================
=   Problem 9   =	Special Pythagorean triplet
==================


A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
					a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/


/*

*/
float problem9(unsigned int lim) {
	// no solution for lim < 5

	float c = 0.0;

	for (float a = 1.0; a < lim; ++a) {
		for (float b = a + 1; b < lim + 1; ++b) {
			c = sqrt(pow(a, 2) + pow(b, 2));

			if ((floor(c) == c) && (b < c) && (a + b + c == lim)) {
				return a * b * c;
			}

			// warn if no solution is found
			if ((a == lim - 1) && (b == lim)) {
				std::cout << "No slution found.";
			}
		}
	}
}