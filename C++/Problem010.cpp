#include "pch.h"
#include "Problems.h"

#include <vector>


/*
=================
=   Problem 9   =	Summation of primes
==================


The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/


/*
Problem 7:Find prime by index
--> Edit to return the list of primes in a range
*/
std::vector<unsigned int> findPrimeBelow(unsigned int n) {
	std::vector<unsigned int> primeList{ 2 };

	for (unsigned int i = 2; i < n; ++i) {
		for (auto prime : primeList) {
			if (i % prime == 0) {
				break;
			}
			else {
				if (prime == primeList.back()) {
					primeList.push_back(i);
				}
			}

		}
	}
	return primeList;
}


unsigned long long int problem10(unsigned int n) {
	unsigned long long int sum = 0;
	for (auto& num : findPrimeBelow(n)) {
		sum += n;
	}
	return sum;
}