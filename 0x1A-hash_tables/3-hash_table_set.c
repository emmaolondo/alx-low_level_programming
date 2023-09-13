#include "hash_tables.h"
/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value:  the value associated with the key. value must be duplicated.
 * value can be an empty string
 * Return: 1(success) or 0 (otherwise)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr;
	char *value_copy;
	unsigned long int key_idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	key_idx = key_index((const unsigned char *)key, ht->size);
	for (i = key_idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(value_copy);
		return (0);
	}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->value = value_copy;
	ptr->next = ht->array[key_idx];
	ht->array[key_idx] = ptr;

	return (1);
}
