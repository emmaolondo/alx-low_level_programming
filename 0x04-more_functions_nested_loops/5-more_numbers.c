#include "main.h"

/**
 *more_numbers - print the numbers 10 times
 *
 *Return: 0
 */
void more_numbers(void)
{
int row_count;
int n;
 for (row_count = 0; row_count < 10; row_count++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar(n / 10 + '0');
n = n % 10;
_putchar((n + '0'));
}
_putchar('\n');
}
}
}
