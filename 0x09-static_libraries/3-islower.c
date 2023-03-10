#include <unistd.h>
#include "main.h"

/**
 *_islower - checks if the character is in lowercase
 *@c: integer operand
 *
 *Return: 1 (success)
 */
int _islower(int c)
{
if ((c >= 'a' && c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
