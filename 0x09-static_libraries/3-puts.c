#include "main.h"
/**
 * _puts - Entry point
 *
 * @s: function parameter
 *
 * Return: always 0
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
	_putchar(*s);
	s++;
	}
	_putchar('\n');
}
