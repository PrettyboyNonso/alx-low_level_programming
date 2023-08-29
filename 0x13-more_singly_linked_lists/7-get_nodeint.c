#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * list_lenght - Entry point
 * @head: param
 * Return: integer
 */
unsigned int list_lenght(listint_t *head)
{
	listint_t *temp;
	temp = head;
	unsigned int count;

	count = 0;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
/**
 * get_nodeint_at_index - Entry point
 * @head: param
 * @index: param
 * Return: structs
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;
	unsigned int listLen;

	temp = head;
	listLen = list_lenght(head);

	if (index <= (listLen - 1))
	{
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
	}
	else
	{
		return (NULL);
	}

	return (temp);
}
