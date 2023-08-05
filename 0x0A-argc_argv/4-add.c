#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * is_digit_string - main point
 * @str: str
 * Return: 1
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int initial;
	int num;

	initial = 0;
	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_digit_string(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		initial += num;
	}

	printf("%d\n", initial);
	return (0);
}
