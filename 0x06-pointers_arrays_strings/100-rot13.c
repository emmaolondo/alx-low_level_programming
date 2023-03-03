#include "main.h"

/**
 *rot13 -function that cyphers letters by rotating by 13
 *@str: string pointer
 *
 *Return: encrypted string
 */
char *rot13(char *str)
{
int i, k;
char letter[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char replace[] = "nopqrstuvwxyzabcdefgijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; str[i + 0]; i++)
{
for (k = 0; k <= 52; k++)
{
if (letter[k] == str[i])
{
str[i] = replace[k];
}
}
}
return (str);
}
