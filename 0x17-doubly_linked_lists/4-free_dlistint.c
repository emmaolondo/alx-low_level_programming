#include "lists.h"
/**
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = NULL;
	
	if (head != NULL)
	{
		while (head != NULL)
		{
			ptr = head;
			head = head->next;
			free(ptr);
		}
	}
}
