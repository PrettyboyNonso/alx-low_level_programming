#include "main.h"
/**
 * print_line - Entry point
 *
 * @n: function parameter
 *
 * Return: always 0
 */
void print_line(int n)
{
int i;

for (i = 0; i <  n; i++)
{
if (n <= 0)
{
break;
}
else
{
_putchar('_');
}
}
_putchar('\n');
}
