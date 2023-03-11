#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: string source pointer
 * @accept: substring pointer
 *
 *
 *Return: byte count
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0; /* used to count the bytes*/
unsigned int b = 0;
unsigned int p = 0;
unsigned int i, j;
/* length of the string*/
while (*s != '\0')
{
p++;
s++;
}
while (*accept != '\0')
{
b++;
accept++;
}
for (i = 0; i < p; i++)
{
for (j = 0; j < b; j++)
{
if (s[i] == accept[j])
{
n++;
break;
}
else
{
break;
}
}		
}
return (n);
}
