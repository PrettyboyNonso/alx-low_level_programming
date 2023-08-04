#include "main.h"
/**
 * _puts - Entry point
 *
 * @str: function parameter
 *
 * Return: always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
