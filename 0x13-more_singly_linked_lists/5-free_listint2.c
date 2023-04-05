#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head pointer
 *
 * Return: free
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr, *temp;

	temp = *head;
	while (temp != NULL)
	{
		ptr = temp->next;

		free(temp);
		temp = ptr;
	}
	*head = NULL;
}
