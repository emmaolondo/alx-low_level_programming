#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@str: pointer string variable
 *
 *Return: 0
 */
char *string_toupper(char *str)
{
int n; /* Number of elements in array*/
for (n = 0; str[n] != '\0'; n++)
{
if (str[n] >= 'a' && str[n] <= 'z')
{
str[n] = str[n] - 'b' + 'B';
}
}
return (str);
}
