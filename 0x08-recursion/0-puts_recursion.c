#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s:param
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
	_putchar('\n');

	_puts_recursion(s + 1)
	}
}

