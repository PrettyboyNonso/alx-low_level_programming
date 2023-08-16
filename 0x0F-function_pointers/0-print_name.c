#include "function_pointers.h"
/**
 * print_name - main entry
 * @name: param
 * @f: param
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	(f)(name);
}
