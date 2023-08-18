#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - Entry point
 * @separator: param
 * @n: param
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, const char *);
		if (str != NULL)
		{
			printf("%s", str);
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		else if (str == NULL)
		{
			printf("(nil)");
			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
}
