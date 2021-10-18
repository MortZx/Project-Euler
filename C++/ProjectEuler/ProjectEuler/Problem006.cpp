#include "pch.h"
#include "Problems.h"

#include <cmath>

using std::pow;

/*
=================
=   Problem 6   =	Sum Square Difference
==================


2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


unsigned int squareOfSum(unsigned int naturalNumRange) 
{
	unsigned int sumNum = 0;
	for (unsigned int i = 0; i < naturalNumRange + 1; ++i) 
	{
		sumNum += i;
	}
	return pow(sumNum, 2);
}


unsigned int sumOfSquares(unsigned int naturalNumRange) 
{
	unsigned int sumPow = 0;
	for (unsigned int i = 0; i < naturalNumRange + 1; ++i) 
	{
		sumPow += pow(i, 2);
	}
	return sumPow;
}


// 
unsigned int problem6(unsigned int naturalNumRange) 
{
	return (squareOfSum(naturalNumRange) - sumOfSquares(naturalNumRange));
}