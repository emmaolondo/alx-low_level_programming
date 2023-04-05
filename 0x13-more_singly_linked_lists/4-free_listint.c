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
	listint_t *ptr, *temp;
	temp = head;
	while (temp != NULL)
	{
		ptr = head->next;

		free(temp);
		temp = ptr;
	}

}
