#include "main.h"

/**
 *puts2 - Prints the even numbers
 *@str: pointer variable
 *
 *Return: 0
 */
void puts2(char *str)
{
int str_length, i;
str_length = 0;
i = 0;
char *y = str;
while (*y != '\0')
{
y++;
str_length++;
}
for (i = 0; i <= str_length - 1; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
