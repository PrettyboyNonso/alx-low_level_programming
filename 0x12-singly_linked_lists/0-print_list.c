#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - Entry point
 * @h: param
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	int count;

	temp = h;
	count = 0;

	if (h != NULL)
	{
		while (temp->next != '\0')
		{
		if (temp->str == NULL)
		{
		printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] ", temp->len);
			printf("%s\n", temp->str);
		}

		temp = temp->next;
		count++;
		}
		if (temp->next == '\0')
		{
			if (temp->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			{
				printf("[%d] ", temp->len);
				printf("%s\n", temp->str);
			}
			count++;
		}
	}
	return (count);
}

