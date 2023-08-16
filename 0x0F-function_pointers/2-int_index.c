#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Entry point
 * @array: param
 * @size: param
 * @cmp: param
 * Return: always int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
		if ((cmp)(array[i]))
		{
			return (i);
		}
		}
	}
	return (-1);
}
