#include  <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: argument count
 * @argv: argument vector
 *
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
int n1, n2, product;
if (argc < 3)
{
printf("%s\n", "Error");
return (1);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
product = n1 *n2;
printf("%d\n", product);
return (0);
}
