#include "main.h"
#include <limits.h>
/**
 * _atoi - Entry point of code
 *
 * @s: param
 *
 * Return: always 0
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;
	int prev_result;

	while (*s)
	{
	if (*s == '-')
	sign *= -1;
	else if (*s >= '0' && *s <= '9')
	{
	digit = *s - '0';
	prev_result = result;
	result = result * 10 + digit;

	if (result < prev_result)
	{
	if (sign == 1)
	return INT_MAX;
	else
	return INT_MIN;
	}
	}
	else if (result != 0)
	break;

	s++;
	}

	return (result * sign);
}
