#include "main.h"

/**
 * _strstr -  a function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
int i,j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; i++)
{
if (haystack[i] == needle[j])
{
return (haystack + i);
}
}
}
return (0);
}
