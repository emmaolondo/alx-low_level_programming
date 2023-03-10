#include "main.h"

/**
 *_strcat -  a function that concatenates two strings.
 *@dest: pointer to destination
 *@src: pointer to source
 *
 *
 *Return: 0
 */
char *_strcat(char *dest, char *src)
{
/* initialise variables for string count*/
int i = 0;
int j = 0;
/* loop the destination string to count*/
while (dest[i] != '\0')
{
i++;
}
/* loop through source appending the dest to it*/
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
