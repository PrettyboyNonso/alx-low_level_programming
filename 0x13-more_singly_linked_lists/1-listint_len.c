#include <stddef.h>
#include "lists.h"
/**
 * listint_len - Function entry
 * @h: param
 * Return: an integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	size_t count;

	temp = h;
	count = 0;

	if (h != NULL)
	{
		do

		{
			count++;
			temp = temp->next;
		} while (temp != NULL);
	}

	return (count);
}
