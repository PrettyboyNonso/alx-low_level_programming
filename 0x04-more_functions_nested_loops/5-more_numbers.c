#include "main.h"
/**
 * more_numbers - Entry point
 *
 * Description: prints loops
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar('1');
	}
	_putchar('0' + (j % 10));
	}
	_putchar('\n');
	}
}
