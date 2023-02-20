#include <stdio.h>
#include <stdlib.h>

/**
 *main - combination of two numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
int m;
int n;
for (m = '0'; m <= '8'; m++)
{
for (n = '1'; n <= '9'; n++)
{
if (m != n && m < n)
{
putchar(m);
putchar(n);
if (m + n != 17)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
