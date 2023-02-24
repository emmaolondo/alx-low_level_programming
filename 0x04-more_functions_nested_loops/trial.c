#include <stdlib.h>
#include <stdio.h>

/**
 *print_diagonal - prints the line
 *@n: diagonal line
 *
 *Return: 0
 */
void print_diagonal(int n)
{
char l = ' ';
char m = '\\';
char s = '\n';
int spacecount;
int k = 0;
if (n <= 0)
{
printf("%c", s);
}
else
{
  for (k = 0; k < n; k++)
{
for (spacecount = 1; spacecount <= n; n++)
{
printf("%c", l);
}
printf("%c", m);
printf("%d", s);
}
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_diagonal(0);
print_diagonal(2);
print_diagonal(10);
print_diagonal(-4);
return (0);
}
