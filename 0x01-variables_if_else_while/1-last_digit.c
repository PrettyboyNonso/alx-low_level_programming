#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Description: This program checks for the last digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	y = n % 10;

	if (y == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, y);
	}
	else if (y > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, y);
	}
	else if (y < 6 && y != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
	}
	return (0);
}
