#include "function_pointers.h"

/**
 *array_iterator - function that executes a function given as
 *a parameter on each element of an array.
 *@array: integer of an array pointer
 *@size: size of the array
 *@action: pointer to a function array_iterator
 *
 *
 *
 *
 *Return: array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
i = 0;
if (array && action)
{
while (i < size)
{
action(array[i]);
i++;
}
}
}
