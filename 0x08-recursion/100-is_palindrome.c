#include "main.h"

int _strlen(char *s);
int is_palindrome_recursive(char *s, int start, int end);
/**
 * is_palindrome - Entry
 * @s: parameter
 * Return: always 0
 */
int is_palindrome(char *s)
{
	int len;

	if (!s)
	{
		return (0);
	}

	len = _strlen(s);
	return (is_palindrome_recursive(s, 0, len - 1));
}
/**
 * _strlen - Entry again
 * @s: param
 * Return: always 0
 */
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome_recursive - Entry point
 * @end: param
 * @start: param
 * @s: param
 * Return: always 0
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

