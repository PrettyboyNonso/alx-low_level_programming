#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - Entry point
 * @head: param
 * @n: param
 * Return: listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp;

	lastNode = (listint_t *)malloc(sizeof(listint_t));

	if (lastNode == NULL)
	{
		return (lastNode);
	}
	temp = *head;
	lastNode->n = n;
	lastNode->next = NULL;
	if (temp == NULL)
	{
		*head = lastNode;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = lastNode;
	}
	return (lastNode);
}
