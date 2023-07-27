#include <stdio.h>
#include "main.h"
/**
 * cap_string - function entry
 *
 * @str: param
 *
 * Return: str
 *
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr != '\0')
	{
	if (*ptr >= 'a' && *ptr <= 'z')
	{
	if (capitalize_next)
	{
	*ptr = *ptr - 32;
	capitalize_next = 0;
	}
	}
	else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
	 *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	 *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
	 *ptr == '}')
	{
	capitalize_next = 1;
	}
	else
	{
	capitalize_next = 0;
	}

	ptr++;
	}

	return (str);
}
