#include "main.h"

/**
 * get_endianness - function that checks the endianness
 *
 * Return: 1(big endianess) or 0(little endianess)
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *str = (char *) &i;

	if (*str)
		return (1);
	return (0);
}
