#include "main.h"
/**
 * _puts_recursion - Entry point
 * @s:param
 * Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else if (*s != '\0')
	{
	_putchar(*s);

	_puts_recursion(s + 1);
	}

}

