#include "lists.h"
/**
 * sum_dlistint - A function that returns the sum of all data in a list
 * @head: head pointer
 * Return: sum or Null
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
