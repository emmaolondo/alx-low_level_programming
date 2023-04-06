#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head node
 * @head: head pointer
 *
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL || head == NULL)
	{
		return (0);
	}
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	temp = NULL;
	return (data);
}
