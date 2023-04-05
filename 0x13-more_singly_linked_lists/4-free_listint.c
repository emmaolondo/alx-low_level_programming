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
	listint_t *ptr;

	while (head != NULL)
	{
		free(head);
	}
	ptr = head->next;
}
