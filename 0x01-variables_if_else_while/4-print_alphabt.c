#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: omit alphabets
 *
 * Return: 0 (Success)
 */
int main(void)
{
char lowcase;

lowcase = 'a';
while (lowcase < 123)
{
if (lowcase == 101 || lowcase == 113)
{
lowcase++;
continue;
}
putchar(lowcase);
lowcase++;
}
putchar('\n');
return (0);
}
