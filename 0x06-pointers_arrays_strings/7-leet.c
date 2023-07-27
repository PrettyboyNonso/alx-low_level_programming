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
	char *leet_replacements = "44371011";

	int i, j;

	for (j = 0; leet_chars[j]; j++)
	{
	leet_table[(unsigned char)leet_chars[j]] = leet_replacements[j];
	}

	for (i = 0; str[i]; i++)
	{
	if (leet_table[(unsigned char)str[i]])
	{
	str[i] = leet_table[(unsigned char)str[i]];
	}
	}
	return (str);
}
