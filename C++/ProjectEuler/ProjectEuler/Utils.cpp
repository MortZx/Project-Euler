/*
=================
	Utilities - 
==================

Useful functions compiled from problem solutions.
*/

#include "pch.h"
#include "Utils.h"

bool Utils::IsDivisibleBy(int num, int divideBy)
{
	if (num % divideBy == 0)
	{
		return true;
	}
	return false;
}


void Utils::GetFibonacciSequenceUpTo(const uint lim, std::vector<uint>& vecFib)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int next = 0;

	while (a <= lim)
	{
		vecFib.push_back(a);

		// Increase our Fibonnaci sequence
		next = a + b;
		a = b;
		b = next;
	}
}


void Utils::GetFirstXFibonacciSequence(const uint lim, std::vector<uint>& vecFib)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int next = 0;

	while (vecFib.size() <= lim)
	{
		vecFib.push_back(a);

		// Increase our Fibonnaci sequence
		next = a + b;
		a = b;
		b = next;
	}
}