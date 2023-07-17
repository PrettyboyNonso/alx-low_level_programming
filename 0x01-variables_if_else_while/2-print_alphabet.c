#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point here
 *
 * Description: Prints the alphabets with loop
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char lowercase;

	/* your code goes there */
	lowercase = 'a';
	while (lowercase < 123)
	{
	putchar(lowercase);
	lowercase++;
	}
	putchar('\n');
	return (0);
}
