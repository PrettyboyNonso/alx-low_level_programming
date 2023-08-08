#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Entry point
 * @str: param
 * Return: always 0
 */
char *_strdup(char *str)
{
	int i;
	int j;
	int iteration_count;

	if (str == NULL)
	{
	return (NULL);
	}
	iteration_count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	iteration_count += 1;
	}

	char *duplicate = malloc(sizeof(char) * (iteration_count) + 1);
	if (duplicate == NULL)
	{
	return (NULL);
	}
	for (j = 0; str[j] != '\0'; j++)
	{
	duplicate[j] = str[j];
	}
	duplicate[j] = '\0';
	return (duplicate);
}

