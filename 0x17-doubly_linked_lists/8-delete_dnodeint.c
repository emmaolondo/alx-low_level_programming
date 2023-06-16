#include "lists.h"

/**
 * delete_dnodeint_at_index( - deletes a node at a particular index
 * @head: head pointer
 * @index: index to be deleted
 *
 * Return: 1(success) or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *ptr = NULL;

	if (*head == NULL)
		return (-1);
	while (index != 0)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		index--;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		ptr->next = temp->next;
		if (temp->next == NULL)
		{
			temp->next->prev = ptr;
		}
	}
	free(temp);
	temp = NULL;

	return (1);
}
