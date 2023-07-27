#include <stdio.h>
#include "main.h"
/**
 * rot13 - Encode a string using ROT13
 *
 * @str: The string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i]; i++)
	{
	for (j = 0; input[j]; j++)
	{
	if (str[i] == input[j])
	{
	str[i] = output[j];
	break;
	}
	}
	}

	return (str);
}
