#include <stdio.h>
#include "main.h"
/**
 * leet - function entry point
 *
 * @str: parameter
 *
 * Return: str
 *
 */
char *leet(char *str)
{
	char leet_table[256] = {0};
	char *leet_chars = "aAeEoOtTlL";
	char *leet_replacements = "44337011";

	int i;
	char *ptr;

	for (i = 0; leet_chars[i] != '\0'; i++)
	{
	leet_table[(unsigned char)leet_chars[i]] = leet_replacements[i];
	}

	for (ptr = str; *ptr != '\0'; ptr++)
	{
	*ptr = leet_table[(unsigned char)*ptr];
	}

	return (str);
}
