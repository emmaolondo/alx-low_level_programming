#include "main.h"

/**
 *leet - function that encodes a string into 1337.
 *@str: string pointer
 *
 *Return: encoded str
 */
char *leet(char *str)
{
int i, k;
char letter[] = "aAeEoOtTlL";
char replace[] = "4433007711";
for (i = 0; str[i + 0]; i++)
{
for (k = 0; k <= 10; k++)
{
if (letter[k] == str[i])
{
str[i] = replace[k];
}
}
}
return (str);
}
