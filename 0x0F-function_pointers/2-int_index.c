#include "function_pointers.h"

/**
 *int_index - a function that searches an imteger
 *@array: array
 *@size: number of array elements
 *@cmp: pointer to a function
 *
 *
 *
 *Return: 1 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, val;
i = 0;
if ((size > 0) && array && cmp)
{
while (i < size)
{
val = cmp(array[i]);
if (val)
{
break;
}
i++;
}
if (i < size)
{
return (i);
}
}
return (-1);
}
