#include <stdio.h>
#include <stdlib.h>
/**
 * check_else - Entry point
 * @ptr: param
 * @count_one: param
 * @s1: param
 * @s2: param
 * @n: param
 * Return: pointer always
 */
char *check_else(char *ptr, int count_one, int n, char *s1, char *s2)
{
	int k, j;

	ptr = malloc(sizeof(char) * ((count_one + n) + 1));

	if (ptr == NULL)
	{
	return (NULL);
	}
	for (k = 0; k < (count_one + n); k++)
	{
	if (k == (count_one))
	{
	for (j = 0; j < n; j++)
	{
	ptr[k] = s2[j];
	k++;
	}
	}
	ptr[k] = s1[k];
	}
	ptr[count_one + n] = '\0';
	return (ptr);
}
