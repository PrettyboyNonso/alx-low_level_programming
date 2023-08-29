#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * pop_listint - Entry point
 * @head: param
 * Return: an int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *newFirstNode;
	int value;

	if (*head == NULL)
		return (0);

	temp = *head;
	value = temp->n;

	if (temp->next != NULL)
	{
		newFirstNode = temp->next;
		*head = newFirstNode;
	}
	else
	{
		*head = NULL;
	}

	free(temp);

	return (value);
}
