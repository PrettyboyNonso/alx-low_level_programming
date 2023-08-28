#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * free_listint2 - Function entry
 * @head: param
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *nextNodeAddress;

	temp = *head;

	if (temp != NULL)
	{
		while (temp != NULL)
		{
			nextNodeAddress = temp->next;
			free(temp);
			temp = nextNodeAddress;
		}
	}
	*head = temp;
}
