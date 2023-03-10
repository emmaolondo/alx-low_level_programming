#include "main.h"

/**
 *_strcpy - Copy contents ofa ponter to another
 *@dest: the destination location
 *@src: source of pointer location
 *
 *
 *Return: 0
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
