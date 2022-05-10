#pragma once

#include <string>

namespace StringUtils
{
	/**
	 * Addition with strings for long numbers
	 *
	 * @param strMultiplicand - String number 1
	 * @param strMultiplier - String number 2
	 * @param res - String to store result
	 */
	void StringAddition(const std::string str1, const std::string str2, std::string& res);

	/**
	 * Multiplication with strings for long numbers
	 *
	 * @param strMultiplicand - String number 1
	 * @param strMultiplier - String number 2
	 * @param res - String to store result
	 */
	void StringMultiplication(const std::string strMultiplicand, const std::string strMultiplier, std::string& result);
}