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
	list_t *temp, *ptr;

	ptr = head;
	while (ptr != NULL)
	{
	temp = ptr->next;

	free(ptr->str);
	free(ptr);
	ptr = temp;
	}
}
