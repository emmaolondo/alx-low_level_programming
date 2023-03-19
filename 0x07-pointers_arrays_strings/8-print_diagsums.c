#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of the two 
 * diagonals of a square matrix of integers.
 * @a: array pointer
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int d1 = 0;
int d2 = 0;
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
/* get sum of first diagonal*/
if (i ==j)
{
d1 += a[i * size + i];
}
/* get sum of second diagonal*/
if ((i + j) == (size -1))
{
d2 += a[i * size + (size - i - 1)];
}
}
printf ("%d, %d\n", d1, d2);
}
}
