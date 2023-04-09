#include "main.h"

/**
 * clear_bit - set the bit value to 0
 * @n: number
 * @index: index to be changed
 *
 *
 * Return: 1(success) otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	
	if (index >= sizeof(n) * 8)
		return (-1);

	p = ~(1 << index);
	*n = (*n & p);
	return (1);
}
