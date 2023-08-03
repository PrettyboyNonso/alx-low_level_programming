#include "main.h"
/**
 * factorial - Entry
 * @n: param
 * Return: always 0
 */
int factorial(int n)
{
	if (n < 0)
		return -1;
	else if (n == 0)
		return (1);
	else
	return (n * factorial(n - 1));
}
