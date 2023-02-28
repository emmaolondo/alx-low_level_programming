#include "main.h"
#include <stdio.h>

/**
 *print_array - print values of an array
 *@a: A pointer variable
 *@n: array length
 *
 *
 *Return: 0
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
