#include "main.h"

/**
 *print_alphabet - write a progragram that outputs lowercase alphabets
 *
 *Return: 0 (success)
 */
print_alphabet(void)
{
int ch;
for (ch = 'A'; ch <= 'Z'; ch++)
{
_putchar(tolower(ch));
_putchar('\n');
}
return (0);
}
