#include <stdio.h>
#include <math.h>

/**
 * is_prime - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime(long n)
{
	if (n <= 1)
	return 0;

	for (long i = 2; i * i <= n; i++)
	{
	if (n % i == 0)
	return 0;
	}

	return 1;
}

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

	return largest_factor;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	long num = 612852475143;
	long largest_factor = largest_prime_factor(num);

	if (largest_factor == 0)
	{
	printf("No prime factors found for %ld.\n", num);
	}
	else
	{
	printf("The largest prime factor of %ld is %ld.\n", num, largest_factor);
	}

	return 0;
}

