#include "main.h"

/**
 *reverse_array - function toreverse an array
 *@a: string pointer
 *@n: size of elements in the array
 *
 *
 *return: 0
 */
void reverse_array(int *a, int n)
{
int p;
int i = 0;
int j = n - 1;
int *b, *c, tmp;
b = a;/* points at the first element*/
c = a; /*points at the first element*/
for (p = 0; p < n - 1; p++)/* loop to move the c pointer at the end*/
{
c++;
}
for (p = 0; p < n / 2; p++)/* swap the pointers*/
{
tmp = a[i];
a[i] = b[j];
b[j] = tmp;
i++;
j--;
}
}
