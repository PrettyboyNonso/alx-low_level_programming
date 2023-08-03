#include "main.h"

int is_divisible(int n, int divisor);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	return !is_divisible(n, n - 1);
}

int is_divisible(int n, int divisor)
{
	if (divisor == 1)
	{
		return 0;
	}
	if (n % divisor == 0)
	{
		return 1;
	}
	return is_divisible(n, divisor - 1);
}

