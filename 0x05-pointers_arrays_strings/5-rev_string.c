#include "ain.h"

/**
 *rev_string - Recerse a string
 *@s: Pointer variable
 *
 *Return: 0
 */
void rev_string(char *s)
{
int p, i;
char *start, *end, tmp;
p = 0;
while (s[i++])
{
p++;
}
start = s; /* begining of a string*/
end = s; /* end of a string*/
for (i = 0; i < p - 1; i++)
{
end++; /* move the end pointer to the last string*/
}
for (i = 0; i < p / 2; i++) /* swap the characters*/
{
tmp = *start;
*start = *end;
*end = tmp;
start++;
end--;
}
}
