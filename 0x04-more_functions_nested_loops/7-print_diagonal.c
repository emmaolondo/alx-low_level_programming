#include "main.h"

/**
 *print_diagonal - prints the line
 *@n: diagonal line
 *
 *Return: 0
 */
void print_diagonal(int n)
{
int spacecount;
int k;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (k = 0; k < n; k++)
{
for (spacecount = 1; spacecount <= n; spacecount++)
{
_putchar(' ');
}
_putchar('\\');
}
_putchar('\n');
}
}
