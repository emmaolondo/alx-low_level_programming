#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add node to the end of a list
 * @head: head pointer
 * @str: string to be printed
 *
 *
 * Return: Address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *ptr, *temp;
	char *s_new = strdup(str);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(temp);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	temp->str = s_new;
	temp->len = i;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
