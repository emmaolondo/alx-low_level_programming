#include <stdio.h>

/**
 * main - print possible combination of numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
int k;
for (k = '0'; k <= '9'; k++)
{
putchar(k);
if (k < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
