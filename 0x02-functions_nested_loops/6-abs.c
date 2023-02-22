#include "main.h"

/**
 *_abs - prints the absolute value of a number
 *@value: local variable
 *
 *Return: 0 (success)
 */
int _abs(int value)
{
int number = value * ((2*value + 1)%2);
_putchar(number);
return (0);
}
