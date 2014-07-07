// Problem1.cpp : Defines the entry point for the console application.

#include "stdafx.h"

/* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
 * Find the sum of all the multiples of 3 or 5 below 1000.*/

int _tmain(int argc, _TCHAR* argv[])
{
	int sum = 0;
	for (size_t i = 0; i < 1000; i++) {if (((i % 3) == 0) || ((i % 5) == 0)) {sum += i;}}
	printf("%d\n", sum);
	return 0;
}
