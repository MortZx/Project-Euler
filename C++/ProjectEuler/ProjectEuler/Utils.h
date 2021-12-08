#pragma once

#include <vector>
#include <stdint.h>


typedef unsigned int	uint;


namespace Utils
{
	/**
	 * Checks if a number is fully divisible by another
	 *
	 * @param num Divident
	 * @param divideBy Divisor
	 * @return True if remainder is 0
	 */
	bool IsDivisibleBy(int num, int divideBy);

	/**
	 * Stores all Fibonacci sequence numbers up to a max value
	 *
	 * @param lim Maxium value
	 * @param vecFib Vector to store the sequence in
	 */
	void GetFibonacciSequenceUpTo(const unsigned int lim, std::vector<unsigned int>& vecFib);

	/**
	 * STores the firs Nth Fibonacci sequence numbers
	 *
	 * @param lim Nth number
	 * @param vecFib Vector to store the sequence in
	 */
	void GetFirstXFibonacciSequence(const unsigned int lim, std::vector<unsigned int>& vecFib);

	/**
	 * Returns the Nth prime number
	 *
	 * @param index Nth number
	 * @warning Max value limited to unsigned int range
	 */
	unsigned int GetNthPrimeNumber(unsigned int index);
	
	/**
	 * Stores the first Nth prime number
	 *
	 * @param lim Nth prime number
	 * @param primeList Vector to store the prime numbers
	 */
	void GetPrimeVecUpToNth(unsigned int lim, std::vector<unsigned int>& primeList);

	/**
	 * How many divisors does a number have
	 *
	 * @param num Dividend
	 * @return Number of divisors dividend has
	 */
	unsigned int CalcNumDivisors(const int num);

	/**
	 * Stores all divisors of a number
	 *
	 * @param num Dividend
	 * @param vecDivisors Vector where divisors are stored
	 */
	void GetVecDivisors(const int num, std::vector<unsigned int>& vecDivisors);
}