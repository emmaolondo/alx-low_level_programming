#include "main.h"

/**
 *_strspn - function that gets the length of a prefix substring
 *@s: start pointer
 *@accept: substring to be tested
 *
 *
 *Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0; /* used for bytes count*/
unsigned int i, j;
unsigned int p = 0; /* used for string count*/
unsigned int b = 0;
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