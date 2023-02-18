#include <stdio.h>
#include <ctype.h>

/**
 *main -convert to lower case using the putchar
 *
 *Return: 0 (success)
 */
int main(void)
{
char ck;
for (ck = "A"; ck <= "Z"; ck++)
{
putchar(tolower(ck));
putchar("");
}
return (0); 
}
