#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - Entry point
 * @ac: param
 * @av: param
 * Return: always 0
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	int i, current_index;
	char *result;
	total_length = 0;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
	total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc((total_length + 1) * sizeof(char));
	if (result == NULL)
	{
	return (NULL);
	}

	current_index = 0;
	for (i = 0; i < ac; i++)
	{
	strcpy(result + current_index, av[i]);
	current_index += strlen(av[i]);
	result[current_index] = '\n';
	current_index++;
	}
	result[total_length] = '\0';

	return (result);
}
