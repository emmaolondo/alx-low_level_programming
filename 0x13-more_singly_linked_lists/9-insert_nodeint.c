#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert node at a given index
 * @head: head pointer
 * @idx: position to be added
 * @n: integer to be added
 *
 *
 *
 * Return: new list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;
	unsigned int i;

	ptr = *head;
	i = 0;
	ptr2 = (struct listint_s *)malloc(sizeof(listint_t));

	while (ptr != NULL && (i != idx - 1))
	{
		i++;
		ptr = ptr->next;
	}

	if (ptr2 == NULL)
	{
		return (NULL);
	}
	ptr2->n = n;
	ptr2->next = NULL;

	if (ptr == NULL)
	{
		ptr = ptr2;
		return (ptr2);
	}
	else
	{
		idx--;
		while (idx != 0)
		{
			ptr = ptr->next;
			idx--;
		}
			ptr2->next = ptr->next;
			ptr->next = ptr2;
	}
	return (ptr2);
}
