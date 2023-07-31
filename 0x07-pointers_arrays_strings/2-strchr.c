#include "main.h"
/**
 * _strchr - main function
 * @s: param
 * @c: param
 * Return: always 0
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != '\0')
	{
		if (*ptr == c)
		{
			return (ptr);
		}
		ptr++;
	}

	if (*ptr == c)
	{
		return (ptr);
	}

	return (NULL);
}
