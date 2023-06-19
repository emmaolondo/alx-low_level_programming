#include "main.h"

/**
 * _atoi - function that converts a string to integer
 * @s: pointer string
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int val, i;
	int n = 1;/* show the sign of value*/
	val = i =0;

	if (s[0] == '-')
	{
		n = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			val = val * 10 + (s[i] - '0');
		else
			break;
	}
	return (n * val);
}
