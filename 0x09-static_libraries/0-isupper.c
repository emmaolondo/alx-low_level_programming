#include "main.h"

/**
 *_isupper - Checks if the character is in uppercase
 *@c: Local variable
 *
 *Return: 1 (success) 0 (otherwise)
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
return (0);
}
