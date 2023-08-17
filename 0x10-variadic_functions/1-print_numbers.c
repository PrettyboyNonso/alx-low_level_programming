#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_numbers - Entry point
 * @separator: param
 * @n: param
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		unsigned int result = va_arg(numbers, unsigned int);

		printf("%d", result);
		if (separator != NULL && i < n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
