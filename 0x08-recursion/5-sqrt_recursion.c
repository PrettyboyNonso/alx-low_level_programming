#include "main.h"
int sqrt_recursive(int n, int guess);
/**
 * _sqrt_recursion - Entry point
 * @n: param
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursive(n, n / 2));
}
/**
 * sqrt_recursive - Entry
 * @guess: param
 * @n: param
 * Return: always 0
 */
int sqrt_recursive(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

	if (new_guess == guess || new_guess > guess)
	{
		return (guess);
	}

	return (sqrt_recursive(n, new_guess));
}

