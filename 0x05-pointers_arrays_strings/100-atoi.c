#include "main.h"
/**
 * _atoi - Entry point of code
 *
 * @s: param
 *
 * Return: always 0
 */

int _atoi(char *s)
{
	long sign = 1;
	long result = 0;
	long digit;

	while (*s)
	{
	if (*s == '-')
	sign *= -1;
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	result = result * 10 + digit;
	}
	else if (result != 0)
	break;

	s++;
	}

	return (result * sign);
}
