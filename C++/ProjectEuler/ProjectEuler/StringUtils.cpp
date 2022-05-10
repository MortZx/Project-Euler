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
	void StringAddition(const std::string str1, const std::string str2, std::string& res)
	{
		res.clear();
		size_t minLen = str1.length() - 1;
		if (str1.length() > str2.length())
		{
			minLen = str2.length() - 1;
		}

		// Carry out addition arithmetic for each digit 
		int carry = 0;
		size_t i = 0;
		while (i <= minLen)
		{
			int d1 = (str1.at(str1.length() - i - 1) - '0');
			int d2 = (str2.at(str2.length() - i - 1) - '0');

			int dRes = (str1.at(str1.length() - i - 1) - '0') + (str2.at(str2.length() - i - 1) - '0') + carry;
			carry = dRes / 10;
			res.insert(0, std::to_string(dRes % 10));

			i++;
		}

		// Continue until we no longer have a carry
		size_t j = 0;
		while (carry)
		{
			int dRes = 0;
			if (str1.length() > str2.length() && str1.length() > i + j)
			{
				dRes = (str1.at(str1.length() - 1 - i - j) - '0') + carry;
			}
			else if (str1.length() < str2.length() && str2.length() > i + j)
			{
				dRes = (str2.at(str2.length() - 1 - i - j) - '0') + carry;
			}
			else
			{
				dRes = carry;
			}

			carry = dRes / 10;
			res = std::to_string((dRes % 10)) + res;
			j++;
		}

		// Add the front digits of the longest number
		if (str1.length() > str2.length() && str1.length() > i + j)
		{
			res = str1.substr(0, str1.length() - i - j) + res;
		}
		else if (str1.length() < str2.length() && str2.length() > i + j)
		{
			res = str2.substr(0, str2.length() - i - j) + res;
		}
	}


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