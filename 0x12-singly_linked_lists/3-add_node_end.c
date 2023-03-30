#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_len - gets the length of string
 * @str: string
 *
 * Return: string count
 */
unsigned int str_len(char *str)
{
unsigned int i;
i = 0;
while (str[i])
{
i++;
}
return (i);
}

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
	list_t *ptr, *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (temp);
	}
	temp->len = str_len(temp->str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (temp);
}
