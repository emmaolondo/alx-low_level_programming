#include "lists.h"
#include <stdlib.h>

/**
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr2;

	ptr = *head;
	ptr2 = (struct listint_s *)malloc(sizeof(listint_t));

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
		while (idx != 1)
		{
			ptr = ptr->next;
			idx--;
		}
			ptr2->next = ptr->next;
			ptr->next = ptr2;
	}
	return (ptr2);
}
