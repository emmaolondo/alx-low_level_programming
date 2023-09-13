#include "hash_tables.h"
/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: a pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;/**create a new pointer*/
	unsigned long int i = 0;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t) * size);
	if (hash->array == NULL)
		return (NULL);
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
