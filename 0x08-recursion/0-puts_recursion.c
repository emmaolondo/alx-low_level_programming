#include "main.h"

/**
 *_puts_recursion - a function that prints a string, followed by a new line
 *@s: string pointer
 *
 *Return: s
 */
void _puts_recursion(char *s)
{
int i; /* used for string count*/
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
