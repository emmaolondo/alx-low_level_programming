#include "main.h"

/**
 * print_binary - prints the binary equivalebt of a number
 * @n: integer number
 *
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned int bit = 0;

	if (n > 1)
		print_binary(n >> 1);
	bit = n & 1;
	_putchar(bit + '0');
}
