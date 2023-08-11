#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - Entry point
 * @s1: param
 * @s2: param
 * @n:param
 * Return: pointer always
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int itteration_one, itteration_two;
	int i;
	int j;

	new_string = NULL;
	itteration_one = 0;
	itteration_two = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	itteration_one += 1;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
	itteration_two += 1;
	}
	if (n >= itteration_two)
	{
	new_string = check_if(new_string, itteration_one, itteration_two,  s1, s2);
	return (new_string);
	}

	else
	{
	new_string = check_else(new_string, itteration_one, n, s1, s2);
	return (new_string);
	}
}
