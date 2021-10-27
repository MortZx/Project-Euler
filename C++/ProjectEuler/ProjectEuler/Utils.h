#pragma once

#include <vector>
#include <stdint.h>


typedef unsigned int	uint;


namespace Utils
{
	bool IsDivisibleBy(int num, int divideBy);
	void GetFibonacciSequenceUpTo(const unsigned int lim, std::vector<unsigned int>& vecFib);
	void GetFirstXFibonacciSequence(const unsigned int lim, std::vector<unsigned int>& vecFib);
	unsigned int GetNthPrimeNumber(unsigned int index);
	void GetPrimeVecUpToNth(unsigned int lim, std::vector<unsigned int>& primeList);
}