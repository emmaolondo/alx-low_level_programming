#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: integer
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
char *ptr;
ptr = (char *)malloc(b);
if (ptr == NULL)
{
free(ptr);
exit(98);
}
return (ptr);
}
