#include "main.h"

/**
 * get_bit - get bit value at a certain index
 * @n: decimal value
 * @index: the nth position
 *
 * Return: bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index >= sizeof(n)* 8)
		return (-1);

	/**
	 * shift binary equivalent by the index(nth) value to get the lastbit
	 * use bitwise AND to get the value of lastbit
	 */
	bit_value = (n >> index) & 1;

	return (bit_value);
}
