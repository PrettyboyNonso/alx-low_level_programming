#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"
/**
 * main - Entry point.
 * @argc: The number of arguments.
 * @argv: The array of arguments.
 *
 * Return: 0 (Success).
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*func)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	result = func(a, b);
	printf("%d\n", result);
	return (0);
}
