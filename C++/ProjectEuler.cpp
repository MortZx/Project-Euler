// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <chrono>

#include "Problems.h"

using std::cout;
using std::endl;
using std::chrono::duration_cast;
using std::chrono::milliseconds;
using std::chrono::microseconds;
using std::chrono::high_resolution_clock;

int main()
{
	/*
	high_resolution_clock::time_point start = high_resolution_clock::now();
	int lim = 1000;
	printf("Solution to problem 1: %d", problem1(lim) );
	high_resolution_clock::time_point end = high_resolution_clock::now();
	auto elapsed = duration_cast<microseconds>(start - end).count();
	printf("\t in %ld microseconds", elapsed);
	*
	high_resolution_clock::time_point start = high_resolution_clock::now();
	int lim = 4000000;
	printf("Solution to problem 2: %d", problem2(lim));
	high_resolution_clock::time_point end = high_resolution_clock::now();
	auto elapsed = duration_cast<milliseconds>(start - end).count();
	printf("\t in %ld milliseconds", elapsed);
	/*/
	high_resolution_clock::time_point start = high_resolution_clock::now();
	unsigned long long int num = 600851475143;
	printf("Solution to problem 3: %d", problem3(num));
	high_resolution_clock::time_point end = high_resolution_clock::now();
	auto elapsed = duration_cast<milliseconds>(start - end).count();
	printf("\t in %ld milliseconds", elapsed);
	/*
	start = clock();
	unsigned int numDigits = 3;
	printf("Solution to problem 4: %d \t in %f seconds", problem4(numDigits), ((clock() - start) / ((double)CLOCKS_PER_SEC)));
	*
	start = clock();
	unsigned int evenlyDivisibleRange = 20;
	printf("Solution to problem 5: %d \t in %f seconds", problem5(evenlyDivisibleRange), ((clock() - start) / ((double)CLOCKS_PER_SEC)));
	
	start = clock();
	unsigned int naturalNumRange = 100;
	printf("Solution to problem 6: %d \t in %f seconds", problem6(naturalNumRange), ((clock() - start) / ((double)CLOCKS_PER_SEC)));
	*
	start = clock();
	unsigned int index = 10001;
	printf("Solution to problem 7: %d \t in %f seconds", problem7(index), ((clock() - start) / ((double)CLOCKS_PER_SEC)));
	*
	start = clock();
	unsigned int adj = 4;
	cout << "Solution to probelm 8: " << problem8(adj) << endl;
	
	start = clock();
	unsigned int lim = 1000;
	cout << "Solution to problem 9: " << problem9(lim) << endl;
	
	start = clock();
	unsigned int numPrimes = 2000000;
	cout << "Solution or problem 10: " << problem10(numPrimes) << endl;
	
	start = clock();
	cout << "Solution to problem 11: " << problem11() << endl;
	
	start = clock();
	int divisors = 500;
	cout << "Solution to problem 12: " << problem12(divisors) << endl;
	
	problem13();
	*/
	return 0;
}

