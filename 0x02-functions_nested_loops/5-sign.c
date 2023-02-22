#include "main.h"

/**
 *print_sign - prints the sign of a number
 *@n: local variable
 *
 *Return: 1 (success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n == 0)
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
