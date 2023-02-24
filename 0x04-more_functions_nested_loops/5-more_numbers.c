#include "main.h"

/**
 *more_numbers - print the numbers 10 times
 *
 *Return: 0
 */
void more_numbers(void)
{
int row_count = 1;
int n;
while (row_count < 10)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
n = n % 10;
_putchar((n + '0'));
}
 _putchar(n);
_putchar('\n');
}
row_count++;
}
}
