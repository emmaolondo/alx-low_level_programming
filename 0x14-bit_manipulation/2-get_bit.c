#include "main.h"

/**
 * get_bit - gets the bit valie at a given position
 * @n: the decimal number
 * @index: the position
 *
 * Return: bit value or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= sizeof(n) * 8)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
