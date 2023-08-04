#include <stdio.h>
#include "main.h"
/**
 * _strcat - main entry point
 *
 * @dest: parameter
 *
 * @src: parameter
 *
 * Return: always 0
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
