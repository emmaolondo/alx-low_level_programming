#include <stdio.h>
#include <stdlib.h>

/**
 *main - a program that prints the minimum number of
 *coins to make change for an amount of money.
 *@argc: argument count
 *@argv: argument vector
 *
 *
 *Return: change
 */
int main(int argc, char *argv[])
{
	int cents, change, i;
	int coin[5] = {25, 10, 5, 2, 1};
	change = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for(i = 0; i < 5; i++)
	{
		if(cents % coin[i] >= 0)
		{
			change += cents / coin[i];
			cents = cents % coin[i];
		}
	}
	printf("%d\n", change);
  return (0);
}
