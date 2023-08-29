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
	temp = *head;
	if (temp != NULL)
	{
		if (temp->next != NULL)
		{
			newFirstNode = temp->next;
			*head = newFirstNode;
		}
	}
	else
	{
		return (0);
	}
	return (temp->n);
}
