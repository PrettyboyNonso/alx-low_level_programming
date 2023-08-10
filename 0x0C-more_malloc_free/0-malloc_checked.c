#include <stdio.h>
#include <stdlib.h>
/**
 * malloc - Entry point
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
