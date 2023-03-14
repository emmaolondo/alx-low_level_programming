#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, 
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: a character
 *
 *
 * Retturn: char
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;
ptr = (char*)malloc(size * sizeof(char));
if (ptr == NULL )
{
return (NULL);
}
else
{
for (i = 0; i <= size; i++)
{
ptr[i] = c ;
}
}
return (ptr);
}
