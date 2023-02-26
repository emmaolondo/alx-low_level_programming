#include "main.h"
#include <stdio.h>
11;rgb:0000/0000/0000
/**
 *print_to_98 - function that prints numbers upto 98
 *@n: local variable
 *
 *Return: 0
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n < 98)
printf("%d, ", n++);
printf("%d\n", n);
}
else
{
while (n > 98)
{
printf("%d, ", n--);
printf("%d", n);
}
}
}
