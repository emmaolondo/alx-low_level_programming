#include "main.h"

/**
 *print_alphabet_x10 - prints a string of alphabet 10 times
 *
 *Return: 0 (success)
 */
void print_alphabet_x10(void)
{
int ch;
int row_counts;
for (row_counts  0; row_counts <= 10; row_counts++)
{
for (ch = 'a'; ch = 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
