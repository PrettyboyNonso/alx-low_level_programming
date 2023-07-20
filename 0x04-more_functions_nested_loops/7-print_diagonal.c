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

for (i = 0; i < n; i++)
{
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
