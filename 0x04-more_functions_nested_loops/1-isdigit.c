#include "main.h"

/**
 *_isdigit - checks if a number is a digit
 *@c: Local variable
 *
 *Return: 1 (success) otherwise 0
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
