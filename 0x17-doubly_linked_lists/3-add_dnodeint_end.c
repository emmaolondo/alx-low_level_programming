#include "lists.h"
/**
 * add_dnodeint_end - A function that adds new node at the end of a list
 * @head: head pointer
 * @n: data to be added
 *
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail, *new_node;
	
	tail = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*head == NULL)
	{
		(*head) = new_node;
		return (new_node);
	}
	else
	{
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = new_node;
		new_node->prev = tail;
		tail = new_node;
	}
	return (new_node);
}
