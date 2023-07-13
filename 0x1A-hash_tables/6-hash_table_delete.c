#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 * Return: deleted hadh table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *ptr, *tmp;
	hash_table_t *head = ht;
	
	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			ptr = ht->array[idx];
			while (ptr != NULL)
			{
				tmp = ptr->next;
				free(ptr->key);
				free(ptr->value);
				free(ptr);
				ptr = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
