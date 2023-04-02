#include "main.h"

/**
 *_atoi - function
 *@s: pointer string
 *
 *return: integer
 */

int _atoi(char *s)
{
unsigned int i;
int n = 1;/* show the sign of value*/
while (*s == ' ')
{
++s;
}
if (*s == '-')
{
++s;
n = -1;/* change the sign to negative*/
}
else if (*s == '+')
{
++s;
;
}
while (*s >= '0' && *s <= '9')
{
i = (i * 10) + (*s++ - '0');
}
return (i * n);
}
