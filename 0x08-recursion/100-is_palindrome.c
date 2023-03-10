#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 *_strlen - gets the length of the string
 *@n: the string
 *
 *Return: length of string
 */
int _strlen(char *n)
{
if (*n == '\0')
{
return (0);
}
return (1 + _strlen(n + 1));
}

/**
 *is_palindrome - finds the palindrome
 *@s: string pointer
 *
 *Return: 0 or 1
 */
int is_palindrome(char *s)
{
int l = _strlen(s);
int end  = _strlen(s) - 1;
if ((s == NULL) || (l < 0) || (end < 0))
{
return (1);
}
if (l >= end)
{
return (1);
}
if ((s[l++]) != (s[end--]))
{
return (0);
}
return (is_palindrome(s));
}
