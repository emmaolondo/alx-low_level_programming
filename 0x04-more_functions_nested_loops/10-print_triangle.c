#include "main.h"

/**
 *print_triangle - print a right angled triangle
 *@size: Display size of integer
 *
 *Return: 0
 */
void print_triangle(int size)
{
int hash_count = 1;
int a, b, c;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (a = size; a >= 1; a--)
{
for (b = 1; b <= a - 1; b++)
{
_putchar(' ');
}
for (c = 1; c <= hash_count; c++)
{
_putchar('#');
}
_putchar('\n');
hash_count++;
}
}
}
