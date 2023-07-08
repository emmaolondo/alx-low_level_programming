#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of hash table
 *
 * Return: the created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	unsigned int i = 0;
	
	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_table_t) * size);
	if (hash_t->array == NULL)
		return (NULL);
	while (i < size)
	{
		hash_t->array[i] = NULL;
		i++;
	}
	return (hash_t);
}
