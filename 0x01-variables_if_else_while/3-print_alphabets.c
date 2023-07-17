#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowcase;
	char uppercase;

	lowcase = 'a';
	uppercase = 'A';
	while (lowcase < 123)
	{
		putchar(lowcase);
		lowcase++;
		if (lowcase == 123)
		{
			while (uppercase < 91)
			{
				putchar(uppercase);
				uppercase++;
			}
		}
	}
	putchar('$');
	return (0);
}
