#include "main.h"

/**
 * print_binary - prints the binary equivalent of a number
 * @n: number
 *
 * Return: binary value
 */
void print_binary(unsigned long int n)
{
	unsigned int lastbit;

	lastbit = 0;

	if (n > 1)
	{
	       print_binary(n >> 1);/* shift left by 1 recursively*/
	}
	lastbit = n & 1;/* bitwise AND to get the lastbit*/
	_putchar((lastbit) + '0');
}
