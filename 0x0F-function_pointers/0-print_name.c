#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - function that prints a name
 *@name: variable name
 *@f: pointer to function
 *
 *
 *Return: name
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL || f != NULL)
{
f(name);
}
}
