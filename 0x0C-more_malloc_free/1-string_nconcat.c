#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat -  a function that concatenates two strings.
 *@s1: string pointer
 *@s2: string pointer
 *@n: bytes variable
 *
 *
 *
 *Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int a = 0;
unsigned int b = 0;
unsigned int c = 0;
unsigned int d = 0;
unsigned int f = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
}
if ( n >= b)
{
n = b;
}
ptr = (char *) malloc(sizeof(char) * (a + n)+2);
if (ptr == NULL)
{
return (NULL);
}
while (s1[c] != '\0')
{
ptr[f] = s1[c];
c++;
f++;
}
while (s2[d] != '\0' && d < n)
{
ptr[f] = s2[d];
f++;
d++;
}
ptr[f] = '\0';
return (ptr);
}
