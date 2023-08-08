#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - Entry point
 * @size: param
 * @c: param
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	a = malloc(sizeof(*a) * size);
	if (size == 0)
	{
	return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
	a[i] = c;
	}

	return (a);
}
