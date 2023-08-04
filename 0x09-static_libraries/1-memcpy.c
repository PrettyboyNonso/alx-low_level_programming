#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: param
 * @src: param
 * @n: param
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
