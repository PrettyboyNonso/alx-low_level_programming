#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * loop_runner - Entry point
 * @x: param
 * @y: param
 * @memory_space: param
 * Return: always 0
 */

void *loop_runner(char *x, char *y, char *memory_space)
{
	int l;
	int m;

	for (l = 0; x[l] != '\0'; l++)
	{
	memory_space[l] = x[l];
	}
	
	for (m = 0; y[m] != '\0'; m++)
	{
	memory_space[l] = y[m];
	l++;
	}
	memory_space[l] = '\0';
}

/**
 * str_concat - Entry point
 * @s1: param
 * @s2: param
 * Return: always 0
 */
char *str_concat(char *s1, char *s2)
{
	int iterration_1;
	int i;
	int iterration_2;
	int j;
	char *concat_string;
	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	iterration_1 = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
	iterration_1 += 1;
	}

	iterration_2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
	{
	iterration_2 += 1;
	}
	concat_string = malloc((sizeof(char) * (iterration_1 + iterration_2)) + 1);
	if (concat_string != NULL)
	{
	return (loop_runner(s1, s2, concat_string));

	}
	else
	{
	return (NULL);
	}
	return (concat_string);
}
