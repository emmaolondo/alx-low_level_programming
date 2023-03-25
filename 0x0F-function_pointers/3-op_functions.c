#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *op_add - print sum of two values
 *@a: first integer
 *@b: second integer
 *
 *
 *Return: sum
 */
int op_add(int a, int b)
{
int sum;
sum = a + b;
return (sum);
}

/**
 *op_sub - print sum of two integerd
 *@a: first integer
 *@b: second integer
 *
 *
 *Return: difference
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 *op_mul - print product of two values
 *@a: first integer
 *@b: second integer
 *
 *
 *Return: product
 */
int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - print divisor of two numbers
 *@a: integer
 *@b: integer
 *
 *
 *Return: divisor
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 *op_mod - print modulus of two numbers
 *@a: integer
 *@b: integer
 *
 *
 *Return: modulus
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
