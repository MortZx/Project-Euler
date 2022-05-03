#include "pch.h"
#include "Problems.h"
#include "Utils.h"


/*
=================
=   Problem 16   =	Power digit sum
==================

2^15 = 32768 and the sum of its digits is 3 + 2 + 7 + 6 + 8 = 26.

What is the sum of the digits of the number 2^1000?

*/


// Refer to problem 13 for string addition
void StringMultiply(const std::string strMultiplicand, const std::string strMultiplier, std::string& result)
{
	if (strMultiplicand.empty() || strMultiplier.empty())
	{
		return;
	}
	if (result.empty())
	{
		result = "0";
	}

	const unsigned long long multiplier = std::stoull(strMultiplier);
	unsigned int carry = 0;

	// Carry out multiplication arithmetic for each digit 
	for (int i = strMultiplicand.length() - 1; i >= 0; i--)
	{
		unsigned int digit = strMultiplicand.at(i) - '0';
		unsigned int product = digit * multiplier + carry;
		carry = product / 10;

		// Save our digit result
		result.at(i) = (product % 10) + '0';
	}

	// Add the final carry
	if (carry)
	{
		result = std::to_string(carry) + result;
	}
}


unsigned long long Problem16(const unsigned int power)
{
	unsigned long long sumOfDigits = 0;
	std::string strBase = "2";
	std::string result = "2";

	// Expand power operation as a multiplication chain
	for (unsigned int i = 1; i < power; i++)
	{
		StringMultiply(result, strBase, result);
	}

	// Calculate sum of digits
	for (int i = result.length() - 1; i >= 0; i--)
	{
		sumOfDigits += static_cast<int>(result.at(i) - '0');
	}

	return sumOfDigits;
}
