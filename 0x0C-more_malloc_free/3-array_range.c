#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *array_range - a  function that creates an array of integers
 *@min: minimum integer
 *@max: maximum integer in array
 *
 *
 *Return: ptr
 */
int *array_range(int min, int max)
{
int *ptr;
int i;
int len = 0;
if (min > max)
{
return (NULL);
}
/* get length of array*/
for (i = min; i <= max; i++)
{
len++;
}
/* allocate memory to ptr */
ptr = malloc(sizeof(int) * len);
if (ptr == NULL)
{
return (NULL);
}
/* loop through the array to fill the ptr*/
i = 0;
while (min <= max)
{
ptr[i] = min;
i++;
min++;
}
return (ptr);
}
