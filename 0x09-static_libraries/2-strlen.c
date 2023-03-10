#include "main.h"

/**
 *_strlen - Outputs the length of the string
 *@s: a string pointer
 *
 *Return: stringcount
 */
int _strlen(char *s)
{
int n = 0; /* string count */
while (*s != '\0')
{
n++;
s++;
}
return (n);
}
