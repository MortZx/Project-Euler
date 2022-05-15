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
double problem9(unsigned int lim) 
{
	double c = 0.0;

	for (double a = 1.0; a < lim; ++a) 
	{
		for (double b = a + 1; b < lim + 1; ++b) 
		{
			// a^2 + b^2 = c^2
			c = sqrt(pow(a, 2) + pow(b, 2));

			if ( (a + b + c == lim) &&
				 (b < c) )
			{
				return a * b * c;
			}

			// warn if no solution is found
			if ( (a == lim - 1) && 
				 (b == lim) ) 
			{
				std::cout << "No solution found.";
			}
		}
	}
	return 0.0;
}