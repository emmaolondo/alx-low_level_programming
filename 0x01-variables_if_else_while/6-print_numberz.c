#include <stdio.h>

/**
 * main - use the putchar to display the single positive numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
int n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
