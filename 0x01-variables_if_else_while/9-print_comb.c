#include <stdio.h>

/**
 * main - print possible combination of numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
int k;
int l;
for (k = '0'; k <= '9'; k++)
for (l = '0'; l <= '9'; l++)
{
putchar(k,l);
}
return (0);
}
     
