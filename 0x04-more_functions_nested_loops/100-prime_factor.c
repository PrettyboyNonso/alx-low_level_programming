#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 * @n: The number to find the largest prime factor of.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
	long largest_factor = 0;

	for (long i = 2; i * i <= n; i++)
	{
	if (n % i == 0 && is_prime(i))
	{
	largest_factor = i;
	}
	}

	return (largest_factor);
}
