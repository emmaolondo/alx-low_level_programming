#include "hash_tables.h"
#include <stdbool.h>
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: print the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int flag = 0;
	unsigned long int idx = 0;

	if (ht == NULL)
		return; /** returns nothing**/
	printf("{");
	while (idx < ht->size)
	{
		if (ht->array[idx] != NULL)
		{
			if (flag)
				printf(", ");
			ptr = ht->array[idx];
			for (; ptr != NULL; flag = 1)
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
