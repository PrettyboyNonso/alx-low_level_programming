#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * print_name - main entry
 * @name: param
 * @f: param
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
	(f)(name);
	}
}
