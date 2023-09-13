#include "hash_tables.h"
/**
 * hash_table_print -  a function that prints a hash table
 * @ht: hash table
 * Return: the key/value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int sign = 0;
	unsigned long int idx = 0;

	if (ht == NULL)
		return;/** return nothing */
	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			if (sign)
				printf(", ");
			ptr = ht->array[idx];
			for (; ptr != NULL; sign = 1)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
				if (ptr != NULL)
					printf(", ");
			}
		}
		idx++;
	}
	printf("}\n");
}
