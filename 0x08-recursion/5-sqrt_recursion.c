#include "main.h"
int sqrt_recursive(int n, int guess);

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

int sqrt_recursive(int n, int guess)
{
	int new_guess = (guess + n / guess) / 2;

	if (new_guess == guess || new_guess > guess)
	{
		return (guess);
	}

	return (sqrt_recursive(n, new_guess));
}

