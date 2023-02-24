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
for (n = 1; n <= 100; n++)
{
if (n % 3 == 0 && n % 5 == 0)
{
printf("%s%c", "FizzBuzz", ' ');
}
else if (n % 3 == 0)
{
printf("%s%c", "Fizz", ' ');
}
else if (n % 5 == 0)
{
printf("%s%c", "Buzz", ' ');
}
else if (n < 100)
{
printf("%d%c", n, ' ');
}
}
printf("\n");
return (0);
}
