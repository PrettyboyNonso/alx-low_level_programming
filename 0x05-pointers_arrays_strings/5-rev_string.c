#include "main.h"
#include <stddef.h>
/**
 * rev_string - Entry point
 *
 * @s: function parameter
 *
 * Return: always 0
 */
void rev_string(char *s)
{
	char *start; 
	char *end;
	char temp;
	
	if (s == NULL)
	return;

	start = s;
	end = s;

	while (*end != '\0')
	end++;

	end--;

	while (start < end)
	{
	temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
	}
}
