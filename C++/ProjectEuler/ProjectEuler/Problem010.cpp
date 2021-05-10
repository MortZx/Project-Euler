#include "pch.h"
#include "Problems.h"

#include <vector>


/*
=================
=   Problem 10   =	Summation of primes
==================
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

/*
Problem 7:Find prime by index
--> Edit to sum prime numbers
*/
unsigned long long int problem10(unsigned int n) {
	// first prime number is 2
	std::vector<unsigned int> primeList{ 2 };
	unsigned long long int sum = 2;

	// iterate through all number to find the first n prime numbers and keeping track of the sum
	for (unsigned int i = 2; i < n; ++i) {
		for (auto prime : primeList) {
			if (i % prime == 0) {
				break;
			}
			else {
				if (prime == primeList.back()) {
					primeList.push_back(i);
					sum += i;
				}
			}

		}
	}
	return sum;
}