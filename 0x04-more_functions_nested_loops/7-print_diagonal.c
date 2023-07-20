#include "main.h"
/**
 * print_diagonal - Entry point
 *
 * @n: function parameter
 *
 * Return: always 0
 */
void print_diagonal(int n)
{
int i;
int j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
