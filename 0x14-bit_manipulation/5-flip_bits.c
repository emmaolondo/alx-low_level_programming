#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first integer
 * @m: second integer
 *
 * Return: flip counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m;
	int count = 0;

	while (val != 0)
	{
		if (val & 1)
			count++;
		val = val >> 1;
	}
	return (count);
}
