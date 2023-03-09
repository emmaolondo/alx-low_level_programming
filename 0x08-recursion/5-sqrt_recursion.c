#include "main.h"

/**
 *squareroot  - checks if a number is a squareroot
 *@a: first int
 *@b: second int
 *
 *
 *Return: int
 */
int squareroot(int a, int b)
{
if (a * a == b)
{
return (a);
}
if (a * a > b)
{
return (-1);
}
return (squareroot(a + 1, b));
}

/**
 *_sqrt_recursion - returns natural square root of a number
 *@n: integer value
 *
 *Return: -1 or natural squareroot
 */
int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (squareroot(1, n));
}
