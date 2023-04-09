#include "main.h"

/**
 * _putchar - implementation of putchar
 * @c: character to be displayed
 *
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
