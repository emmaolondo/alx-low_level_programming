#include <stdio.h>
#include <ctype.h>

/**
 * main - print the letters in lower case
 *
 *Return: 0 (success)
 */
int main(void)
{
int c;
for (c = 'A'; c <= 'Z'; c++)
{
putchar(tolower(c));
}
putchar('\n');
return (0);
}
