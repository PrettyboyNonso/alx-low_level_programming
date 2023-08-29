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

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;

}
