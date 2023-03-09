#include "main.h"

/**
 *_pow_recursion - display the power of an integer
 *@x: the base value
 *@y: the exponent value
 *
 *
 *Return: -1 or the power value
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
return x * _pow_recursion(x, y - 1);
}
