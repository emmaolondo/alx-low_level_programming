#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - function that print strings
 *@separator:  the string to be printed between the strings
 *@n: number of strings passed
 *
 *
 *Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *str;
va_start(list, n);
for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str == NULL)
{
printf("(nil)");
}
printf("%s" , str);
if ((i < (n - 1)) && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(list);
}
