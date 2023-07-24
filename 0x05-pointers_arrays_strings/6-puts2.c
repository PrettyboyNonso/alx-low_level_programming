#include "main.h"
#include <stddef.h>
/**
 * puts2 - Entry point
 *
 * @str: function parameters
 *
 * Return: always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	if (str == NULL)
	return;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}

	_putchar('\n');
}
