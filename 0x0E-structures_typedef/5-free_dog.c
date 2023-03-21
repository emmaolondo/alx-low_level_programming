#include "dog.h"
#include <stdlib.h>

/**
 *free_dog - function that frees the dogs
 *@d: dog pointer
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
/*free(d->age);*/
free(d->owner);
free(d);
}
}
