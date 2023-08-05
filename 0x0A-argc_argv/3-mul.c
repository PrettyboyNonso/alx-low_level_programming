#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int one;
int two;
int result;

if (argc < 2)
{
printf("Error\n");
return (1);
}
one = atoi(argv[1]);
two = atoi(argv[2]);
result = (one) * (two);
printf("%d\n", result);
return (0);
}
