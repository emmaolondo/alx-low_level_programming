#include "main.h"

/**
 *swap_int - swap values of integers using a temporary file
 *@a: first integer
 *@b: Second integer
 *
 *Return: 0 (success)
 */
void swap_int(int *a, int *b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}
