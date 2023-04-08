#include "main.h"

/**
 * binary_to_uint - coverts binary to decimal
 * @b: binary number
 *
 * Return: decimal value
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, int_value;
	int base_val = 1;

	len = int_value = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;/* gets the length of binary*/
	}

	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' || b[i] != '1')
			return (0);

		if (b[i] == '1')
		{
			int_value += base_val;
		}
		base_val *= 2;
	}
	return (int_value);
}
