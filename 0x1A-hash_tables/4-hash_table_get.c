#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht:  the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	ptr = ht->array[idx];
	while (ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;

	if (ptr == NULL)
		return (NULL);
	else
		return (ptr->value);
}
