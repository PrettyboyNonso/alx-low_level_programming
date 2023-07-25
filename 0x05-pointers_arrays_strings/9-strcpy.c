#include "main.h"
/**
 * _strcpy - Entry point
 *
 * @dest: param
 *
 * @src: param
 * 
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
	*dest = '\0';
	return dest_start;
}
