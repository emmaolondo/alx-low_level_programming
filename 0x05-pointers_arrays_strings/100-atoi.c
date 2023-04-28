#include "main.h"

/**
 *_atoi - function that converts a string to integer
 *@s: pointer string
 *
 *Return: integer
 */

int _atoi(char *s)
{
unsigned int val;
int i;
int n = 1;/* show the sign of value*/
i = 0;
val = 0;
while (s[i] != '\0')
{
while (s[i] == '-')
{
	n *= -1;
}
while (s[i] == ' ')
{
	i++;
}
	if (s[i] >= '0' && s[i] <= '9')
	{
		val = val * 10 + (s[i] - '0');
	}
      	i++;
}
return (n * val);
}
