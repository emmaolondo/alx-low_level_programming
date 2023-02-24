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
int k = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (k <= n)
{
for (spacecount = 1; spacecount <= n; n++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
k++;
}
}
}
