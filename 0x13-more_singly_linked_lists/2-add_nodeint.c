#include <stddef.h>
#include "main.h"
/**
 * add_nodeint - Function Entry
 * @head: param
 * @n: param
 * Return: returning a structure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		return (temp);
	}
	temp->next = *head;
	*head = temp;
	temp->n = n;
}
