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
if (n <= 0)
{
_putchar('\n');
}
else
{
for (spacecount = 1; spacecount <= n; n++)
{
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
