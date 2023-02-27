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

/**
 *print_rev - prints the string in a reverse order
 *@s: string pointer variable
 *
 *Return: 0
 */
void print_rev(char *s)
{
int str_length, i;
char *start, *end, tmp;
str_length = _strlen(s); /* get the length of string*/
start = s; /* beginning of string*/
end = s; /* end of sting = start*/
for (i = 0; i < str_length - 1; i++)
{
end++; /* move end pointer to the last string*/
}
for (i = 0; i < str_length / 2; i++)
{
tmp = *start;
*start = *end;
*end = tmp;
start++;
end--;
}
}
