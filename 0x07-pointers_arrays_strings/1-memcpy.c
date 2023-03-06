#include "main.h"

/**
 *_memcpy - function that copies memory area
 *@dest: destination array
 *@src: source array
 *@n: byte count
 *
 *
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i <= n; i++)
{
dest[i] = src[i];
}
return (dest);
}
