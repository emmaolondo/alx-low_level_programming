#include "main.h"
#include <unistd.h>

/**
 *print_numbers - print numbers
 *
 *Return: 0
 */
void print_numbers(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
_putchar(n);
}
_putchar('\n');
}
