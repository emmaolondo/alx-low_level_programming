#include <stdio.h>
#include <ctype.h>

/**
 * main - Display the alphabets in a reverseed order
 *
 * Return: 0 (success)
 */
int main(void)
{
int ch;
for (ch = 'Z'; ch >= 'A'; ch--)
{
putchar(tolower(ch));
}
putchar('\n');
return (0);
}
