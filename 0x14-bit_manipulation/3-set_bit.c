#include "main.h"

/**
 * set_bit - set bit value at a given index to 1
 * @n: integer value
 * @index: index position
 *
 * Return: 1(success) or -1(unsuccess)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val;

	if (index >= sizeof(n) * 8)
		return (-1);

	val = 1 << index;
	*n = *n | val;

	return (1);
}
