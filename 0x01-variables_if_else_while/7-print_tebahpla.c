#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: reverse alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
char lowcase;

lowcase = 'z';
while (lowcase > 96)
{
putchar(lowcase);
lowcase--;
}

putchar('\n');


return (0);
}
