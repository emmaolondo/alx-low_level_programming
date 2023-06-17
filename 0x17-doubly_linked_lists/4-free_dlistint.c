#include "lists.h"
/**
 * free_dlistint - Free a doubly linked list
 * @head: head pointer
 *
 * Return: free
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
