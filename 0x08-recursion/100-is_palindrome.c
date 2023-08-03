#include "main.h"

int _strlen(char *s);
int is_palindrome_recursive(char *s, int start, int end);

int is_palindrome(char *s)
{
	if (!s)
	{
		return (0);
	}
	int len = _strlen(s);
	return (is_palindrome_recursive(s, 0, len - 1));
}

int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}

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

