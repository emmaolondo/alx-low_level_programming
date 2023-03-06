#include "main.h"

/**
 *_memset - function that fills memory with constant byte
 *@s: pointer array
 *@b: constant byte
 *@n: array count
 *
 *
 *
 *Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
s[i] = b;
n--;
}
return (s);
}
