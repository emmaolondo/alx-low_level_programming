#include <unistd.h>

/**
 *_putchar - Display the charater in a function
 *@ch: local variable
 *
 *Return: 0 (success)
 */
int _putchar(char ch)
{
write(1,&ch, 1);
return (0);
}
