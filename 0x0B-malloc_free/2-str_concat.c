#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 *
 *
 * Return: concatinated string
 */
char *str_concat(char *s1, char *s2)
{
char *ptr;/* string to concatinate to*/
int i = 0;
int j = 0;
int k = 0;
int p = 0;
/* check if string is empty*/
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
/* get length of s2*/
while (s2[i] != '\0')
{
i++;
}
/* allocate memory to ptr*/
ptr = (char *) malloc(sizeof(char *) * i);
if (ptr == NULL)
{
return (NULL);
}
while (s1[j] != '\0')
{
ptr[p] = s1[j];
p++;
j++;
}
/* concatinate s2 string to ptr*/
while (s2[k] != '\0')
{
ptr[p] = s2[k];
p++;
k++;
}
/* ptr[i] = '\0'; */
return (ptr);
}
