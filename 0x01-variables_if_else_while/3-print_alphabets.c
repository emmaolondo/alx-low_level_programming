#include <stdio.h>
#include <ctype.h>

/**
 *main - prints letters in both lower and uppercases
 *
 *Return: 0 (succeess)
 */
int main(void)
{
int ch;
int ck;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (ck = 'A'; ck <= 'Z'; ck++)
{
putchar(ck);
}
putchar('\n');
return (0);
}
