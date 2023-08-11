#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Entry point
 * @nmemb: param
 * @size: param
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;

	if (size == 0 || nmemb == 0)
	{
	return (NULL);
	}
	void *memory = malloc(size * nmemb);

	if (memory == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
	((char *)memory)[i] = 0;
	}
	return (memory);
}

