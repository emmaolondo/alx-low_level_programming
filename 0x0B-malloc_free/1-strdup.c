#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup -  function that returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string pointer
 *
 *
 *
 * Return: string
 */
char *_strdup(char *str)
{
char *ptr;/* an extra string to copy to*/
int n = 0; /* used for length count*/
int i = 0;
if (str == NULL)/* check if string is null*/
{
return (NULL);
}
while (str[n] != '\0')/* get the string length*/
{
n++;
}
ptr = (char *) malloc(sizeof(str) * (n + 1));/* allocate memory for ptr*/
if (ptr == NULL)
{
return (NULL);
}
while (str[i] != '\0')/* string copy*/
{
ptr[i] = str[i];
i++;
}
ptr[n] = '\0';
return (ptr);
}
