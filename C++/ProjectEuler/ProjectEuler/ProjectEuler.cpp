// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>

#include "Problems.h"

using std::cout;
using std::endl;
using std::chrono::duration_cast;
using std::chrono::microseconds;
using std::chrono::milliseconds;
using std::chrono::high_resolution_clock;

int main()
{
	// Set the problem number to solve
	unsigned int problemNumber = 2;

	// setup our timer to calculate time taken to solve problemly6p
	high_resolution_clock::time_point t1 = high_resolution_clock::now();

	switch (problemNumber)
	{
		case 1:
		{
			int lim = 1000;
			printf("Solution to problem 1: %d", problem1(lim));
			break;
		}
		case 2:
		{
			int lim = 4000000;
			printf("Solution to problem 2: %d", problem2(lim));
			break;
		}
		case 3:
		{
			unsigned long long int num = 600851475143;
			printf("Solution to problem 3: %d", problem3(num));
			break;
		}
		case 4:
		{
			unsigned int numDigits = 3;
			printf("Solution to problem 4: %d", problem4(numDigits));
			break;
		}
		case 5:
		{
			unsigned int evenlyDivisibleRange = 20;
			printf("Solution to problem 5: %d", problem5(evenlyDivisibleRange));
			break;
		}
		case 6:
		{
			unsigned int naturalNumRange = 100;
			printf("Solution to problem 6: %d", problem6(naturalNumRange));
			break;
		}
		case 7:
		{
			unsigned int index = 10001;
			printf("Solution to problem 7: %d", problem7(index));
			break;
		}
		case 8:
		{
			unsigned int adj = 4;
			cout << "Solution to probelm 8: " << problem8(adj);
			break;
		}
		case 9:
		{
			unsigned int lim = 1000;
			cout << "Solution to probelm 9: " << problem9(lim);
			break;
		}
		case 10:
		{
			unsigned int numPrimes = 2000000;
			printf("Solution to problem 10: %d", problem10(numPrimes));
			break;
		}
		case 11:
		{
			cout << "Solution to probelm 11: " << problem11();
			break;
		}
		case 12:
		{
			int divisors = 500;
			printf("Solution to problem 12: %d", problem12(divisors));
			break;
		}
	}

	// Print the time taken to solve the problem
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld seconds", duration_cast<microseconds>(t2 - t1).count());

	return 0;
}

