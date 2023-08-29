#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - Entry point
 * @head: param
 * Return: integer
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	temp = head;

	if (temp == NULL)
	{
		return (0);
	}
	sum = 0;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
