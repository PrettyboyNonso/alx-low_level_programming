#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: prints alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char first;

	first = 'a';
	while (first <= 'z')
	{
		_putchar(first);
		first++;
	}

	_putchar('\n');


}
