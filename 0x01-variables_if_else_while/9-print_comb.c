#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: single numbers
 *
 * Return: 0 (Success)
 */

int main(void)
{
int x;

x = 0;

for (x = 0; x <= 9; x++)
{
int newcount = '0' + x;
putchar(newcount);
putchar(',');
putchar(' ');

}

putchar('\n');
return (0);
}
