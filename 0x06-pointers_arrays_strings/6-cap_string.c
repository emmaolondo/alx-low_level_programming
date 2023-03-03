#include "main.h"

/**
 *cap_string - capitalizes the begining of a word
 *@str: string pointer
 *
 *Return: capitalized string
 */
char *cap_string(char *str)
{
int i = 0;/* string elements*/
int s;
char separator[] = " \n\t,;.?!\"(){}";
while (str[i])
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (i == 0)
{
str[i] -= 'a' - 'A';
}
else
{
for (s = 0; s <= 12; s++)
{
if (separator[s] == str[i - 1])
{
str[i] -= 'a' - 'A';
}
}
}
}
i++;
}
return (str);
}
