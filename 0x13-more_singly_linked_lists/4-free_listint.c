#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint - Entry point
 * @head: param
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	listint_t *nextNodeAddress;
	temp = head;
	if (temp != NULL)
	{
		while (temp != NULL)
		{
			nextNodeAddress = temp->next;
			free(temp);
			temp = nextNodeAddress;
		}
	}
}
