#include "main.h"
#include <stddef.h>
#include <ctype.h>
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

	while (str[i] != '\0' && str[i + 1] != '\0')
	{
	if (isprint(str[i]))
	_putchar(str[i]);

	i += 2;
	}

	_putchar(str[i]);
	_putchar('\n');
}
