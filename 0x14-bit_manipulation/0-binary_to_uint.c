#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an integer
 * @b: the binary number
 *
 * Return: integer value or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i, l, decimal, base;

	base = 1;
	l = decimal = 0;

	if (b == NULL)
		return (0);

	while (b[l] != '\0')
	{
		l++;
	}

	for (i = (l - 1); i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
		{
			decimal += base;
		}
		base *= 2;
	}
	return (decimal);
}
