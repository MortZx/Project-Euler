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
=   Problem 4   =	Smallest Multiple
==================


2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/


/*
Iterate through numbers, for each number test divisible for all n specified numbers in an iterated manner unless division has a remainder.

unsigned int problem5(unsigned int evenlyDivisibleRange) {
	unsigned int i = 0;
	while (true) {
		i++;
		for (size_t x = 1; x < evenlyDivisibleRange; ++x) {
			if (i % x != 0) {
				break;
			}
			if (x == evenlyDivisibleRange) {
				return i;
			}
		}
	}
}
*/

unsigned int problem5(unsigned int evenlyDivisibleRange) {
	unsigned int i = 0;
	bool flag = false;
	while (flag == false) {
		++i;
		for (unsigned int x = 1; x < evenlyDivisibleRange+1; ++x) {
			if (i % x != 0) {
				break;
			}
			if (x == evenlyDivisibleRange) {
				flag = true;
			}
		}
	}
	return i;
}