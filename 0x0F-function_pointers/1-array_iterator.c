#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - Entry point
 * @array: param
 * @size: param
 * @action: param
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && array != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			(action)(array[i]);
		}
	}
}
