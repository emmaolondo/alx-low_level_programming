#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node a the beginning
 * @head: head pointer
 * @n: integer
 *
 *
 * Return: new head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (struct listint_s *)malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
