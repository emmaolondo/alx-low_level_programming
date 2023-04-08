#include "lists.h"
/**
 * sum_listint - get the sum of node data
 * @head: head pointer
 *
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
