#include <stdio.h>
#include "main.h"
/**
 * reverse_array - entry point
 *
 * @a: param
 *
 * @n: param
 *
 * Return: always 0
 *
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;

	i++;
	j--;
	}
}
