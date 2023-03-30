#include "lists.h"
#include <stdio.h>

/**
 * print_list - function to print  the number of elements
 * @h: list_t
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
int i;/* counts number of nodes*/
	i = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d][%s]\n", h->len, h->str);
}
i++;
h = h->next;
}
return (i);
}
