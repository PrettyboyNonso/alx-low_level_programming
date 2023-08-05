#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: param
 * @argv: param
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int arry_size;
int i;

arry_size = sizeof(argv)/sizeof(argv[0]);
for (i = 0; i <= arry_size; i++)
{
printf("%c\n", argv[i]);
return (0);
}

}
