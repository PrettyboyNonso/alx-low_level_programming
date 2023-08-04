#include <stdio.h>
#include "main.h"
/**
 * _strncat - main entry point
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * @n: parameter
 *
 * Return: always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0' && n > 0)
	{
		*ptr = *src;
		ptr++;
		src++;
		n--;
	}

	*ptr = '\0';

	return (dest);
}
