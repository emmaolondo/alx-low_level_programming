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
	unsigned long int i, key_idx;
	hash_node_t *ptr;
	char *val; /* copy of the value */

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	/**ptr = malloc(sizeof(hash_node_t));
	**/
	key_idx = key_index((const unsigned char *)key, ht->size);
	i = key_idx;
	while (ht->array[i])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = val;
			return (1);
		}
		i++;
	}
	ptr = malloc(sizeof(hash_node_t));
	if (ptr == NULL)
	{
		free(val);
			return (0);
		}
	ptr->key = strdup(key);
	if (ptr->key == NULL)
	{
		free(ptr);
		return (0);
	}
	ptr->value = val;
	ptr->next = ht->array[key_idx];
	ht->array[key_idx] = ptr;

	return (1);
}
