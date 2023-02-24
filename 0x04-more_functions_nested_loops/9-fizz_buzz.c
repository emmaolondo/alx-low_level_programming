#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print the fizz-Buzz challenge
 *
 *Return: 0 (success)
 */
int main(void)
{
int n;
char s = ' ';
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0)
{
printf("%s %c", "Fizz", s);
}
else if (n % 5 == 0)
{
printf("%s %c", "Buzz", s);
}
else if (n % 5 == 0 && n % 3 == 0)
{
printf("%s %c", "FizzBuzz", s);
}
else
printf("%d %c", n, s);
}
return (0);
}
