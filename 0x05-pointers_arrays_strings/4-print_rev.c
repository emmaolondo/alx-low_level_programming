#include "main.h"

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
str_length = 0; /* get the length of string*/
while(s[i++)
{
str_length++;
}
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
