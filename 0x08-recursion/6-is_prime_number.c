#include "main.h"

/**
 *primenumber - checks if number is a prime number
 *@a: integers variamble
 *@b: integer variable
 *
 *
 *return: integer
 */
int primenumber(int a, int b)
{
if (a == b)
{
return (1);
}
if (!(a % b))
{
return (0);
}
return (primenumber(a, b + 1));
}

/**
 *is_prime_number - checks if a number is a prime number
 *@n: integer value
 *
 *Returm:: 0
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
else
return (primenumber(n, 2));
}
