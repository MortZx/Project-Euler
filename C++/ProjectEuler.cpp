// ProjectEuler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "Problems.h"

using std::cout;
using std::endl;

int main()
{
	/*
	unsigned int lim = 1000;
	cout << "Solution to problem 1: " << problem1(lim) << endl;

	lim = 4000000;
	cout << "Solution to problem 2: " << problem2(lim) << endl;

	unsigned long long int num = 600851475143;
	cout << "Solution to problem 3: " << problem3(num) << endl;

	unsigned int numDigits = 3;
	cout << "Solution to problem 4: " << problem4(numDigits) << endl;

	unsigned int evenlyDivisibleRange = 20;
	cout << "Solution to problem 5: " << problem5(evenlyDivisibleRange) << endl;
	*/
	unsigned int naturalNumRange = 100;
	cout << "Solution to problem 6: " << problem6(naturalNumRange) << endl;

	unsigned int index = 10001;
	cout << "Solution to problem 7: " << problem7(index) << endl;

	return 0;
}

