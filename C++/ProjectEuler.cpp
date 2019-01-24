// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>

#include "Problems.h"

using std::cout;
using std::endl;
using std::clock;

int main()
{
	std::clock_t start;
	double duration;

	start = clock();
	int lim = 1000;
	printf("Solution to problem 1: %d \t\t in %f seconds", problem1(lim), ((clock()-start) / ((double) CLOCKS_PER_SEC)) );
	
	/*
	start = clock()
	lim = 4000000;
	cout << "Solution to problem 2: " << problem2(lim) << "\t\t in << ((clock()-start) / ((double) CLOCKS_PER_SEC)) << seconds << endl;
	
	start = clock();
	unsigned long long int num = 600851475143;
	printf("Solution to problem 3: %d \t\t in %f seconds", problem3(num), ((clock()-start) / ((double) CLOCKS_PER_SEC)));
	
	start = clock();
	unsigned int numDigits = 3;
	cout << "Solution to problem 4: " << problem4(numDigits) << endl;

	start = clock();
	unsigned int evenlyDivisibleRange = 20;
	cout << "Solution to problem 5: " << problem5(evenlyDivisibleRange) << endl;
	
	start = clock();
	unsigned int naturalNumRange = 100;
	cout << "Solution to problem 6: " << problem6(naturalNumRange) << endl;

	start = clock();
	unsigned int index = 10001;
	cout << "Solution to problem 7: " << problem7(index) << endl;
	
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

