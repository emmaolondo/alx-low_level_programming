#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - comparing the size of an integer when a random number is added
 *
 * Return: 0 (success)
 */
int main(void)
{
int n;
n = rand();
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d  is zero", n);
}
else if (n < 0)
{
printf("%d is negative", n);
}
return (0);
}
