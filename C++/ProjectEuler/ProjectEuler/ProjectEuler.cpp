// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>

#include "Problems.h"

using std::chrono::duration_cast;
using std::chrono::microseconds;
using std::chrono::milliseconds;
using std::chrono::high_resolution_clock;

int main()
{
	// Set the problem number to solve and number of iterations
	unsigned int problemNumber = 3;
	unsigned int iterations = 1;

	printf("Solution to problem %d: ", problemNumber);

	// setup our timer to calculate time taken to solve problemly6p
	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	for (unsigned int i = 0; i < iterations; i++)
	{
		switch (problemNumber)
		{
		case 1:
		{
			int lim = 1000;
			// Only print the result on the last iteration
			i == 0 ? printf("%d", Problem1(lim))
				   : Problem1(lim);
			break;
		}
		case 2:
		{
			int lim = 4000000;
			i == 0 ? printf("%d", Problem2(lim))
				   : Problem2(lim);
			break;
		}
		case 3:
		{
			unsigned long long int num = 600851475143;
			i == 0 ? printf("%d", Problem3(num))
				   : Problem3(num);
			break;
		}
		case 4:
		{
			unsigned int numDigits = 3;
			i == 0 ? printf("%d", Problem4(numDigits))
				   : Problem4(numDigits);
			break;
		}
		case 5:
		{
			unsigned int evenlyDivisibleRange = 20;
			i == 0 ? printf("%d", Problem5(evenlyDivisibleRange))
				   : Problem5(evenlyDivisibleRange);
			break;
		}
		case 6:
		{
			unsigned int naturalNumRange = 100;
			i == 0 ? printf("%d", Problem6(naturalNumRange))
				   : Problem6(naturalNumRange);
			break;
		}
		case 7:
		{
			unsigned int index = 10001;
			i == 0 ? printf("%d", Problem7(index))
				   : Problem7(index);
			break;
		}
		case 8:
		{
			unsigned int digits = 13;
			i == 0 ? printf("%llu", Problem8(digits))
				   : Problem8(digits);
			break;
		}
		case 9:
		{
			unsigned int lim = 1000;
			i == 0 ? printf("%f", Problem9(lim))
				   : Problem9(lim);
			break;
		}
		case 10:
		{
			unsigned int numPrimes = 2000000;
			i == 0 ? printf("%llu", Problem10(numPrimes))
				   : Problem10(numPrimes);
			break;
		}
		case 11:
		{
			i == 0 ? printf("%d", Problem11())
				   : Problem11();
			break;
		}
		case 12:
		{
			int divisors = 500;
			i == 0 ? printf("%d", Problem12(divisors))
				   : Problem12(divisors);
			break;
		}

		case 13:
		{
			static std::string strRes{ "" };
			Problem13(strRes);
			if (i == 0) { printf("%s", strRes.c_str()); }
			break;
		}

		case 14: 
		{
			unsigned int maxVal = 1000000;
			i == 0 ? printf("%d", Problem14(maxVal))
			   	   : Problem14(maxVal);
			break;
		}

		case 16:
		{
			unsigned int power = 1000;
			i == 0 ? printf("%llu", Problem16(power))
				   : Problem16(power);
			break;
		}
		}
	}

	// Print the time taken to solve the problem
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\nCompleted in %lld ms", duration_cast<milliseconds>(t2 - t1).count());

	return 0;
}

