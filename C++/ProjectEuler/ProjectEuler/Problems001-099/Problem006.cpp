/*
=================
=   Problem 6   =	Sum Square Difference
=================

The sum of the squares of the first ten natural numbers is,
	1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
	3025 - 385 = 2640

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include "pch.h"
#include "Problems.h"
#include "Utils.h"

#include <cmath>


/**
 * Sum of Squares Vs Square of Sum
 *
 * @param[in] naturalNumRange - Range to consider
 */
unsigned int Problem6(unsigned int naturalNumRange) 
{
	return (Utils::SquareOfSum(naturalNumRange) - Utils::SumOfSquares(naturalNumRange));
}