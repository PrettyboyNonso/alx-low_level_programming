#include "main.h"

/**
 * print_most_numbers - Entry point
 *
 * @void: empty parameter
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
