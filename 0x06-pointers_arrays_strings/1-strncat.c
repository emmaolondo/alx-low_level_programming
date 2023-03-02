#include "main.h"

/**
 *_strncat - concatinatw strings
 *@dest: destination pointer
 *@src: source pointer
 *@n: string size
 *
 *
 *
 *Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (j < n && src[j] != '\0')
{
dest[i + j] = src[j];
i++;
j++;
}
dest[i + j] = '\0';
return (dest);
}
