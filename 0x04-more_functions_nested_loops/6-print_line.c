#include "main.h"

/**
 *print_line - prints the line
 *@n: line count
 *
 *Return: 0
 */
void print_line(int n)
{
int p;
if (n <= '0')
{
_putchar('\n');
}
else
{
for (p = '1'; p <= n; p++)
{
_putchar('-');
}
_putchar('\n');
}
