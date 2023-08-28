#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/**
 * print_listint - function entry
 * @h: parameter
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	if (h != NULL)
	{
		do

		{
			printf("%d\n", temp->n);
			count++;
			temp = temp->next;
		} while (temp != NULL);
	}
	return (count);
}
