#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function to add node at the beginning of a list
 * @head: head pointer of the list
 * @str: string to be printed
 *
 * Return: new_node
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_head = malloc(sizeof(list_t));
int s_len = 0;
char *s_new = strdup(str);
while (str[s_len]
{
s_len++;
}
if (new_head == NULL)
return (NULL);
if (s_new == NULL)
{
free(new_head);
return (NULL);
}
new_head->str = s_new;
new_head->len = s_len;
new_head->next = NULL;

new_head->next = *head;
*head = new_head;
return (new_head);
}
