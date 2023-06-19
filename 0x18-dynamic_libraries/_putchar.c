#include "main.h"

/**
 * _putchar - implement putchar
 * @c: character
 * Return: 1(success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
