// Problem3.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <math.h>

/* The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of the number 600851475143 ? */

int _tmain(int argc, _TCHAR* argv[])
{
	long double p = 600851475143;
	long double m = 3;

	while (sqrt(m) < p)
	{
		if (remainder(p, m) == 0)
		{
			p /= m;
			printf("%.0f\n", m);
		}
		m += 2;
	}

	return 0;
}
