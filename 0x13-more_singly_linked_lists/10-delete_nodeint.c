#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Entry point
 * @head: param
 * @index: param
 * Return: an int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int success;
	unsigned int i;
	listint_t *temp;
	listint_t *beforeNode;
	int listLen;

	temp = *head;
	beforeNode = *head;

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			list_length++;
			temp = temp->next;
		}
		if (index >= list_length)
		{
			success = -1;
		}
		else if (index > 0)
		{
			for (i = 0; i < (index - 1); i++)
			{
				beforeNode = beforeNode->next;
			}
			for (i = 0; i < index; i++)
			{
				temp = temp->next;
			}

			beforeNode->next = temp->next;
			free(temp);
		}
		else if (index == 0)
		{
			*head = temp->next;
			free(temp);
		}
		success = 1;
	}
	else
	{
		success = -1;
	}
	return (success);
}
