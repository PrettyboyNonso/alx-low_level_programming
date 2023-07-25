#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry of code
 *
 * @a: function parameter
 *
 * @n: function parameter
 *
 * Return: always 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	return;

	printf("%d", a[0]);

	for (i = 1; i < n; i++)
	{
	printf(", %d", a[i]);
	}
	printf("\n");
}
