#include "main.h"

/**
 *print_last_digit - prints the last digit of a number
 *@val: the local value
 *
 *Return: 0
 */
int print_last_digit(int val)
{
int last_value = val % 10;
if (last_value < 0)
{
last_value = last_value * -1;
}
_putchar(last_value + '0');
return (last_value);
}
