#include "main.h"

/**
 *print_rev - prints the string in a reverse order
 *@s: string pointer variable
 *
 *Return: 0
 */
void print_rev(char *s)
{
int str_length = 0;
while (str_length >= 0)
{
if (s[str_length] == '\0')
{
break;
}
str_length++; 
}
for (str_length--; str_length >= 0; str_length--)
{
_puchar(s[str_length]);
}
_putchar('\n');
}
