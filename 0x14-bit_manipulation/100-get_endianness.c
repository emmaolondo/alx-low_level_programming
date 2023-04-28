#include "main.h"

/**
 * get_endianness - A function the checks the edianness
 *
 * Return: 1(big endian) or 0 (little endian)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *str = (char *) &i;

	if (*str)
		return (1);
	return (0);
}
