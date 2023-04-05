#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head pointer
 *
 * Return: free
 */
void free_listint(listint_t *head)
{
	listint_t *ptr, *tail;
	ptr = head;
	while (ptr->next != NULL)
	{
		tail = ptr->next;

		free(tail->n);
		free(listint_t);
		ptr = tail;
	}
}
