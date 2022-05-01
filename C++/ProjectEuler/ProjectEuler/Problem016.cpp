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


void StringMultiply(std::string strMultiplicand, std::string strMultiplier, std::string& result)
{
	unsigned long long multiplier = std::stoull(strMultiplier);
	result = strMultiplicand;

	unsigned int carry = 0;
	for (int i = result.length() - 1; i >= 0; i--)
	{
		unsigned int digit = result.at(i) - '0';
		unsigned int product = digit * multiplier + carry;
		carry = product / 10;

		result.at(i) = (product % 10) + '0';
	}

	// Add the final carry
	if (carry)
	{
		//std::string strCarry = std::to_string(carry);
		result = std::to_string(carry) + result;
	}
}


unsigned long long Problem16(const unsigned int power)
{
	unsigned long long sumOfDigits = 0;
	unsigned int base = 2;
	std::string strBase = "2";

	//unsigned long long powerResult = pow(2.0, power);
	//
	//// Convert to string and obtain sum of digits
	//std::string strPowerResult = std::to_string(powerResult);

	//for (char c : strPowerResult)
	//{
	//	unsigned int digit = c - '0';
	//	sumOfDigits += digit;
	//}

	std::string result = "2";

	// Refer to problem 13 for string addition

	// do (res + 2) 
	for (unsigned int i = 1; i < power; i++)
	{
		StringMultiply(result, strBase, result);
	}

	// Calculate sum of digits
	for (int i = result.length() - 1; i >= 0; i--)
	{
		sumOfDigits += (int)result.at(i) - '0';
	}

	return sumOfDigits;
}
