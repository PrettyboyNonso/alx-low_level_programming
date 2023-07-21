#include "main.h"

/**
 * print_triangle - Entry of code
 *
 * @size: function parameter
 *
 * Return: always 0
 */

void print_triangle(int size)
{
	int row, column;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	for (row = 1; row <= size; row++)
	{
	for (column = 1; column <= row; column++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
}
