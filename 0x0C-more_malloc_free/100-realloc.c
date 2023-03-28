#include "main.h"
#include <stdlib.h>

/**
 * _realloc - rellocates memory using malloc and free
 * @ptr: pointer
 * @old_size: initial size of the allocated space for ptr
 * @new_size: The size of new memory block
 *
 * Return: rellocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *memory;
char *new_ptr, *p;
unsigned int i;
if (new_size == old_size)
{
return (ptr);
}
if (ptr == NULL)
{
memory = malloc(new_size);
if (memory == NULL)
	return (NULL);
return (memory);
}
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
new_ptr = ptr;
memory = malloc(sizeof(*new_ptr) * new_size);
if (memory == NULL)
{
free(ptr);
return (NULL);
}
p = memory;
for (i = 0; i < old_size && i < new_size; i++)
p[i] = *new_ptr++;
free(ptr);
return (memory);
}
