#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: Pointer to the 2D array representing the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size)
{
	int sum_main = 0;
	int sum_secondary = 0;
	int i;


	for (i = 0; i < size; i++)
	{
		sum_main += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}


	_putchar(sum_main / 1000 + '0');
	_putchar((sum_main / 100) % 10 + '0');
	_putchar((sum_main / 10) % 10 + '0');
	_putchar(sum_main % 10 + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(sum_secondary / 1000 + '0');
	_putchar((sum_secondary / 100) % 10 + '0');
	_putchar((sum_secondary / 10) % 10 + '0');
	_putchar(sum_secondary % 10 + '0');
	_putchar('\n');
}

