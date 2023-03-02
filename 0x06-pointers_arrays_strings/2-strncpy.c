#include "main.h"
#include <string.h>

/**
 *_strncpy - A function that copies a string
 *@dest: a pointer to the array destination
 *@src: a pointer to the source
 *@n: size to be displayed
 *
 *
 *
 *Return: 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
/* String count*/
while (n != 0)
{
n++;
}
for (i = 0; i < n ; i++)
{
if (src[i] != '\0')
{
dest[i] = src[i];
}
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
