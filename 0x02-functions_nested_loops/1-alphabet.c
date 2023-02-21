#include "main.h"

/**
 *print_alphabet - write a progragram that outputs lowercase alphabets
 *
 *Return: 0 (success)
 */
void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
_putchar('\n');
}
return (0);
}
