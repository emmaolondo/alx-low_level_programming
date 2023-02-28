#include "main.h"

/**
 *puts_half - prints half of the string
 *@str: local pointer variable
 *
 *Return: 0
 */
void puts_half(char *str)
{
int len = 0;
int i = 0;
int n;
while (str[i++])
{
len++;
}
if (len % 2 == 1)
{
n = (len - 1) / 2;
n += 1;
}
else
{
n = len / 2;
}
for (; d < n; d++)
{
_putchar(str[n]);
}
_putchar('\n');
}
