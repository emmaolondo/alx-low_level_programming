#include "main.h"
#include <unistd.h>

/**
 * _putchar - implementation of own putchar
 * @ch: char variable
 *
 * Return: char
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
