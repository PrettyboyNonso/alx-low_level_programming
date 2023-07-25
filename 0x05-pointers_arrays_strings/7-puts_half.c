#include "main.h"

/**
 * puts_half - Entry point
 *
 * @str: function parameter
 *
 * Return: always 0
 */
void puts_half(char *str)
{
	int length = 0;
	char *ptr = str;
	int start;

	while (*ptr != '\0')
	{
	length++;
	ptr++;
	}
	start = (length + 1) / 2;

	while (str[start] != '\0')
	{
	_putchar(str[start]);
	start++;
	}
	_putchar('\n');
}
