#include "main.h"
/**
 * int _strlen - Entry point
 *
 * @*s: function parameter
 *
 * Return: always 0
 */
int _strlen(char *s)
{
int length;

length = 0;
while (*s != '\0')
{
	length++;
	s++;
}

return (length);
}
