#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "First, solve problem. Then, write the code.";
    char *k = "First, solve the problem. Then, write the code.";
    char *f, *p;

    f = _strchr(s, '\0');
p = _strchr(k, ',');
    if (f != NULL)
    {
        printf("%s\n", f);
	printf("%s\n", p);
    }
    return (0);
}
