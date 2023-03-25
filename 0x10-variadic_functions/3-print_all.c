#include "variadic_functions.h"
/**
 *print_all -  print value of any datatype
 *@format: arguments
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
unsigned int i;
char *str, *separator = "";
va_list list;
va_start(list, format);
i  = 0;
if (format)
{
while (format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, (va_arg(list, int)));
break;
case 'i':
printf("%s%d", separator, (va_arg(list, int)));
break;
case 'f':
printf("%s%f", separator, (va_arg(list, double)));
break;
case 's':
str = va_arg(list, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
}
printf("\n");
va_end(list);
}
