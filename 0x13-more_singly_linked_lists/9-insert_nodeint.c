#include "lists.h"

/**
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *prt, *ptr2;

	unsigned int len = 0;
	ptr2 = (struct listint_s *)malloc(sizeof(listint_t));
	ptr = *head;

	while (ptr)
        {
                len++;
                ptr = ptr->next;
        }
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	ptr2->n = n;
	ptr2->next = NULL;

	if (*head == NULL)
	{
		*head = ptr2;
		return (ptr2);
	}
	else
	{
		idx--;
		if (idx < 0 && idx > len)
			return (NULL);
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
	}
	return (ptr2);
}
