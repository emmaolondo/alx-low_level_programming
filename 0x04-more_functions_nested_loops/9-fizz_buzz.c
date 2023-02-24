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
if (n % 3 == 0)
{
printf("%s", "Fizz");
}
else if (n % 5 == 0)
{
printf("%s", "Buz");
}
else if (n % 5 == 0 && n % 3 == 0)
{
printf("%s", "FizzBuzz");
}
else
printf("%d", n);
}
printf("\n");
return (0);
}
