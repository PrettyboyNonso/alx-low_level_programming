#include <stdio.h>
#include "main.h"
/**
 * fizzbuzz - Entry point
 *
 * @void: function parameter is empty
 *
 * Return: always 0
 */
void fizzbuzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
