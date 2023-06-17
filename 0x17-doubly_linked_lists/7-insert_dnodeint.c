#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at a given index
 * @h: head pointer
 * @idx: index position
 * @n: data of the new node
 *
 * Return: address of new_node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *ptr, *temp = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	if (idx == 1)
		(*h) = add_dnodeint((h), n);

	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
	}
	ptr = temp->next;
	temp->next = new_node;
	ptr->prev = new_node;
	new_node->next = ptr;
	new_node->prev = temp;
	new_node->prev = temp;
	return (new_node);
}
