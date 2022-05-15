#include "pch.h"
#include "Problems.h"
#include "Utils.h"
#include "StringUtils.h"


/*
=================
=   Problem 16   =	Power digit sum
==================

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

*/


unsigned long long Problem16(const unsigned int power)
{
	unsigned long long sumOfDigits = 0;
	std::string strBase = "2";
	std::string result = "2";

	// Expand power operation as a multiplication chain
	for (unsigned int i = 1; i < power; i++)
	{
		StringUtils::StringMultiplication(result, strBase, result);
	}

	// Calculate sum of digits
	for (int i = result.length() - 1; i >= 0; i--)
	{
		sumOfDigits += static_cast<int>(result.at(i) - '0');
	}

	return sumOfDigits;
}
