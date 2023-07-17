#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: putchar zero to nine
 *
 * Return: 0 (Success)
 */

int main(void)
{

int x;

x = 0;
for (x = 0; x <= 9; x++)
{
int itteration = '0' + x;
putchar(itteration);

}
putchar('\n');

return (0);
}
