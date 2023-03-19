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
  int coins[5] = {25, 10, 5, 2, 1};
  int i, cents, argcents;
  int totalcoins = 0;
  int coin_count;
  if (argc == 1)
    {
      printf("Error\n");
      return (1);
    }
  argcents = atoi(argv[1]);
  if (argcents < 0)
    {
      printf("%d\n", 0);
      return (0);
    }
  for (i = 0; i < 5; i++)
    {
    coin_count = argcents/coins[i];
    while (coin_count < 0)
      {
	totalcoins++;
      }
     cents -= coin_count * coins[i];
    }
  printf("%d\n", totalcoins);
  return (0);
}
