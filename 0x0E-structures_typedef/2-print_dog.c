#include "dog.h"
#include <stdio.h>

/**
 *print_dog - function that prints a struct dog
 *@d: dog structure
 *
 *Return: dog
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf(NULL);
}
else
{
if (d->name == NULL)
{
printf("Name: nil\n");
}
else
{
printf("Name: %s\n", d->name);
}
if (d->owner == NULL)
{
printf("Owner: nill\n");
}
else{
printf("Owner: %s\n", d->owner);
}
printf("Age: %.6f\n", d->age);
}
}
