#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Entry point
 * @b: param
 * Return: pointer always
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
	exit(98);
	}
	return (ptr);
}
