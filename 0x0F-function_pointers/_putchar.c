#include <unistd.h>
#include "function_pointers.h"

/**
 *_putchar - implementation of the putchar function in c
 *@ch: the character variable
 *
 *Return: 1(sucess)
 */
int _putchar(char ch)
{
return(write(1, &ch, 1));
}
