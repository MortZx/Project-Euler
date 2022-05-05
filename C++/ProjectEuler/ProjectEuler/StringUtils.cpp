/*
====================
	String Helper	
====================

Useful functions compiled from problem solutions.
*/

#include "pch.h"
#include "StringUtils.h"


namespace StringUtils
{
	// Refer to problem 13 for string addition
	void StringMultiplication(const std::string strMultiplicand, const std::string strMultiplier, std::string& result)
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
}