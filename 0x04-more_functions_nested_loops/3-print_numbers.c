#include "main.h"

/**
 * print_numbers - Entry point
 *
 * @void:  empty parameter
 *
 * Return: always 0
 */

void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}
