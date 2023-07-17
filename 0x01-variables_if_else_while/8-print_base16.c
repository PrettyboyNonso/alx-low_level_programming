#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: base 16
 *
 * Return: 0 (Success)
 */

int main(void)
{
char numbers;
char lowcase;

numbers = '0';
lowcase = 'a';

while (numbers < 58)
{
putchar(numbers);
numbers++;

if (numbers == 58)
{

while (lowcase < 103)
{

putchar(lowcase);
lowcase++;

}

}


}

putchar('\n');
return (0);
}
