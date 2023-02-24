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
printf("FizzBuz");
}
else if (n % 3 == 0)
{
printf("Fizz");
}
else if (n % 5 == 0)
{
printf("Buz");
}
else
printf("%d", n);
if (n != 100)
printf(" ");
}
printf("\n");
return (0);
}
