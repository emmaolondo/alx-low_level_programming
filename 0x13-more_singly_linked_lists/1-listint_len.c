#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 *listint_len - function that returns the number
 *of elements in a linked
 *@h: head of list
 *
 *Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
