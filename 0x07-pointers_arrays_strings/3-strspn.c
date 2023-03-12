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
unsigned int j;
/* length of the string*/
while (*s != '\0')
{
for (j = 0; accept[j]; j++)
{
if (*s == accept[j])
{
n++;
break;
}
else if (accept[j + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}
