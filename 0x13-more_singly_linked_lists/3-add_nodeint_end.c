#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - add node at the end
 * @head: head pointer
 * @n: struct data
 *
 *
 * Return: node pointer at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *ptr;

	tail = (struct listint_s *)malloc(sizeof(listint_t));
	if (tail == NULL)
	{
		return (NULL);
	}
	tail->n = n;
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
		return (NULL);
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = tail;
	}
	return (tail);
}
