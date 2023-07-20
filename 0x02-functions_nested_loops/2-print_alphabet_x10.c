#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: prints 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int a;
	char first;

	first = 'a';
	for (a = 0; a <= 9; a++)
	{
	for (first = 'a'; first <= 'z'; first++)
	{
	_putchar(first);
	}
	_putchar('\n');
	}
}
