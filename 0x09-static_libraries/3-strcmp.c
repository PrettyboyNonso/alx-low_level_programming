#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: param
 *
 * @s2: param
 *
 * Return: always 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	return (*s1 - *s2);
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
