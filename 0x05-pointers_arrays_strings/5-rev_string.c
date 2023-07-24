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
	if (s == NULL)
	return;

	char *start;
	char *end;

	start = s;
	end = s;

	while (*end != '\0')
	{
	end++;
	}
	end--;
	
	while (start < end)
	{
	char temp = *start;
	*start = *end;
	*end = temp;

	start++;
	end--;
	}
}
