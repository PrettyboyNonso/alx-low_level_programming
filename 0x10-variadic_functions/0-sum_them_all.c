#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * @n: param
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result;
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	result = 0;

	if (n == 0)
	{
	return (0);
	}
	for (i = 0; i < n; i++)
	{
	result += va_arg(numbers, unsigned int);
	}
	va_end(numbers);
	return (result);
}
