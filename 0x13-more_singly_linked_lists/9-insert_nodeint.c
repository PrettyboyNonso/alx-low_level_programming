#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_lenght - Entry point
 * @head: param
 * Return: an integer
 */
unsigned int list_lenght(listint_t **head)
{
	listint_t *temp;
	unsigned int count;

	count = 0;
	temp = *head;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * insert_nodeint_at_index - Entry point
 * @idx: param
 * @n: param
 * Return: a struct
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *newNode;
	unsigned int i;
	unsigned int listlen;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	listlen = list_lenght(head);
	temp = *head;
	if (idx <= (listlen - 1))
	{
		if (newNode == NULL)
		{
			return (NULL);
		}
		for (i = 0; i < idx; i++)
		{
			temp = temp->next;
		}
		newNode = temp;
		newNode->n = n;
		newNode->next = temp->next;
	}
	else
	{
		return (NULL);
	}
	return (newNode);
}
