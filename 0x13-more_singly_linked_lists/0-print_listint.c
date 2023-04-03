#include "lists.h"
#include <stdio.h>
#include <stddef.h>


/**
 * print_listint -  a function that prints all
 * elements of a listint_t list.
 * @h: listint
 *
 * Return: elements and node count
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
