#include <stdio.h>
#include "main.h"
/**
 * _strncpy - Entry point
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 *
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src != '\0' && n > 0)
	{
	*ptr = *src;
	ptr++;
	src++;
	n--;
	}

	while (n > 0)
	{
	*ptr = '\0';
	ptr++;
	n--;
	}

	return (dest);
}
