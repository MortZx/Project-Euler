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
	/*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	int lim = 1000;
	printf("Solution to problem 1: %d", problem1(lim) );
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld seconds", duration_cast<microseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	int lim = 4000000;
	printf("Solution to problem 2: %d", problem2(lim) );
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld seconds", duration_cast<microseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned long long int num = 600851475143;
	printf("Solution to problem 3: %d", problem3(num));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld seconds", duration_cast<microseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int numDigits = 3;
	printf("Solution to problem 4: %d", problem4(numDigits));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int evenlyDivisibleRange = 20;
	printf("Solution to problem 5: %d", problem5(evenlyDivisibleRange));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int naturalNumRange = 100;
	printf("Solution to problem 6: %d", problem6(naturalNumRange));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int index = 10001;
	printf("Solution to problem 7: %d", problem7(index));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int adj = 4;
	cout << "Solution to probelm 8: " << problem8(adj);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	cout << "\t in " << duration_cast<milliseconds>(t2 - t1).count() << " milliseconds";
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int lim = 1000;
	cout << "Solution to probelm 9: " << problem9(lim);
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	cout << "\t in " << duration_cast<milliseconds>(t2 - t1).count() << " milliseconds";
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	unsigned int numPrimes = 2000000;
	printf("Solution to problem 10: %d", problem10(numPrimes));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	cout << "Solution to probelm 11: " << problem11();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	cout << "\t in " << duration_cast<milliseconds>(t2 - t1).count() << " milliseconds";
	*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	int divisors = 500;
	printf("Solution to problem 12: %d", problem12(divisors));
	high_resolution_clock::time_point t2 = high_resolution_clock::now();
	printf("\t in %ld milliseconds", duration_cast<milliseconds>(t2 - t1).count());
	*/
	problem13();
	//*
	return 0;
}

