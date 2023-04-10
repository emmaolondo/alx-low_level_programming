#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 *
 *
 * Return: flip counts
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip_counts;
	/* get the XOR of the bumbers*/
	unsigned long int val = n ^ m;

	flip_counts = 0;

	while (val != 0)
	{
		if (val & 1)
		{
			flip_counts++;
		}
		val = val >> 1;
	}
	return (flip_counts);
}
