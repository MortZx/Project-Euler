#include "pch.h"

# include "Problems.h"

/*
=================
=   Problem 1   =	Multiples of 3 and 5
==================

If we list all the natural numbers below 10 that are multiples of 3 or 5,
we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

// Check if number is divisible by 3 or 5 and add to the sum
int problem1(int lim) {
	int ans = 0;
	for (size_t i = 0; i < lim; ++i) {
		if (i % 3 == 0 || i % 5 == 0) {
			ans += i;
		}
	}
	return ans;
}


/*
=================
=   Problem 2   =	Even Fibonacci numbers
==================


Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed
four million, find the sum of the even-valued terms.
*/

// Can also create a solution that keeps the list of Fib sequence if needed
int problem2(int lim) {
	int a = 1;
	int b = 2;
	int next = 0;
	int total = 0;
	while (a <= lim) {
		if (a % 2 == 0) {
			total += a;
		}
		next = a + b;
		a = b;
		b = next;
	}
	return total;
}