#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: param
 * Return: always 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	}
	else if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	}
	printf("%c", *s);
}