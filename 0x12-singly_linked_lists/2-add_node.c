#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_len - gets the length of the string
 * @str: string
 *
 * Return: string count
 */
int str_len(const char *str)
{
	int s_len;
	s_len = 0;
	while (str[s_len])
	{/* get string length*/
		s_len++;
	}
	return (s_len);
}

/**
 * add_node - function to add node at the beginning of a list
 * @head: head pointer of the list
 * @str: string to be printed
 *
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	if (str == NULL)
		return (NULL);
	
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
		return (NULL);
	}
	
	new_head->str = strdup(str);
	if (new_head->str== NULL)
	{
		free(new_head);
		return (NULL);
	}
	
	new_head->len = str_len(str);
	new_head->next = NULL;
	
	new_head->next = *head;
	*head = new_head;
	
	return (new_head);
}
