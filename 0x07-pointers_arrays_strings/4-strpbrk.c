#include "main.h"

/**
 *_strpbrk - a.
 *@s: source string
 *@accept: substring
 *
 *
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
char *t;
if ((*s == '\0') || (*accept == '\0'))
{
return (0);
}
while (*s != '\0')
{
t = accept;
while (*t != '\0')
{
if (*s == *t)
{
return (s);
}
t++;
}
s++;
}
return (0);
}
