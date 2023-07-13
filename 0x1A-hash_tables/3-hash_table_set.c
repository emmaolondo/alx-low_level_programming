#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to a hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1(success) or 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr;
	char *v; /* copy of the value */
	unsigned long int key_idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	v = strdup(value);
	if (v == NULL)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);
	for (i = key_idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v;
			return (1);
		}
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(v);
			return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->value = v;
	ptr->next = ht->array[key_idx];
	ht->array[key_idx] = ptr;

	return (1);
}
