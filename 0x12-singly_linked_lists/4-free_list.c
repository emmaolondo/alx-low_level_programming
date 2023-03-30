#include "lists.h"
#include <stdlib.h>
/**
 * free_list -  a function that frees a list_t list.
 * @head: head pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
	temp = head->next;

	free(head->str);
	free(head);
	head = temp;
	}
}
