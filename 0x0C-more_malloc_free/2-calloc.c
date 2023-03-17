#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *_calloc - function that allocates memory for array
 *@nmemb: elements in an array
 *@size: size of array
 *
 *
 *Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
/* allocate the ptr to the memory*/
ptr = (char *)malloc(nmemb * size);
if (ptr == NULL)
{/* check if ptr is empty*/
return (NULL);
}
while (i < (nmemb * size))
{/* loop to set mem to 0*/
ptr[i] = 0;
i++;
}
return (ptr);
}
