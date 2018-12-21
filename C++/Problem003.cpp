#include "pch.h"
#include "Problems.h"

#include <vector>

using std::vector;


/*
=================
=   Problem 3   =	Largest prime factor
==================


The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

// Can also create a solution that keeps the list of Fib sequence if needed
unsigned int problem3(unsigned long long int num) {
	vector<unsigned int> pFactors;
	unsigned int isPrime{ 2 };
	while (num > 1) {
		if (num % isPrime == 0) {
			pFactors.push_back(isPrime);
			num /= isPrime;
		}
		isPrime += 1;
	}
	return pFactors.back();
}
