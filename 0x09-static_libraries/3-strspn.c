#include "main.h"
/**
 * _strspn - Entry point
 * @s: param
 * @accept: param
 * Return: always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *ptr_s = s;

	while (*ptr_s != '\0')
	{
		char *ptr_accept = accept;
		int found = 0;

		while (*ptr_accept != '\0')
		{
			if (*ptr_s == *ptr_accept)
			{
				found = 1;
				break;
			}
			ptr_accept++;
		}

		if (!found)
		{
			break;
		}

		length++;
		ptr_s++;
	}

	return (length);
}
