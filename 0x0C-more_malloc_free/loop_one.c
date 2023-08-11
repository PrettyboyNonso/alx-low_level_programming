#include <stdio.h>
#include <stdlib.h>
/**
 * check_if - Entry point
 * @ptr: param
 * @count_one: param
 * @count_two: param
 * @s1: param
 * @s2: param
 * Return: pointer always
 */
char *check_if(char *ptr, int count_one, int count_two, char *s1, char *s2)
{
	int l, m;

	ptr = malloc(sizeof(char) * (count_one + count_two + 1));
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (l = 0; l < (count_one + count_two); l++)
	{

	if (l == (count_one))
	{
	for (m = 0; m < count_two; m++)
	{
	ptr[l] = s2[m];
	l++;
	}
	}
	ptr[l] = s1[l];
	}
	ptr[count_one + count_two] = '\0';
	return (ptr);
}
