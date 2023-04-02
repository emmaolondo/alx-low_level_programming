#include "main.h"

/**
 *_atoi - function
 *@s: pointer string
 *
 *return: integer
 */

int _atoi(char *s)
{
unsigned int val;
int i;
int n = 1;/* show the sign of value*/
i = 0;
val = 0;
if (s[i] == '-')
{
	n = -1;
	i++;
}
if (s[i] == '+')
{
	n *= 1;
	i++;
}
while (s[i] == ' ')
{
	i++;
}
while (s[i] != '\0')
{
	if (s[i] >= '0' && s[i] <= '9')
	{
		val = val * 10 + (s[i] - '0');
	}
       i++;
}
return (n * val);
}
