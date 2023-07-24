#include "main.h"
/**
 * swap_int - Swap variable
 *
 * @a: function parameter
 *
 * @b: function parameter
 *
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
int temp; 

temp = *a;
*a = *b;
*b = temp; 
}
