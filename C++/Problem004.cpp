#include "pch.h"
#include "Problems.h"

#include <vector>
#include <cmath>
#include <string>
#include <algorithm>

using std::vector;
using std::pow;
using std::string;
using std::to_string;


/*
=================
=   Problem 4   =	Largest palindrome product
==================


A palindromic number reads the same both ways. The largest palindrome made from
the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

// Finds the largest palindrome made from the product of two n-digit specific
// numbers.Iterate through all possible numbers and save all palindroms in a list.
// !!appending to list is costly !!

// @param integer - number of digits for multiplied numbers
// @return integer - largest palindrome of the product of two n digit numbers
unsigned int problem4(unsigned int numDigits) {
	unsigned int minNum = pow(10, numDigits - 1);
	unsigned int maxNum = pow(10, numDigits);
	unsigned int isPrime = 2;
	vector<int> palindroms;
	for (size_t i = minNum; i < maxNum; ++i) {
		for (size_t x = minNum; x < maxNum; ++x) {
			string productString = to_string(i*x);

			// create new variable for reverse string
			string revString{ productString };
			std::reverse(revString.begin(), revString.end());

			if (productString == revString) {
				palindroms.push_back(i*x);
			}
		}
	}
	// !! max_element returns an iterator so need to use * in front !!
	auto maxPalindrome = *max_element(std::begin(palindroms), std::end(palindroms));
	return maxPalindrome;
}