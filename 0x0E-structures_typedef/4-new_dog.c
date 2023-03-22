#include "dog.h"
#include <stdlib.h>
/**
 *new_dog - function that creates a new dog
 *@name: name variable
 *@age: age variable
 *@owner: owner variable
 *
 *
 *
 *Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i, j, n, o;
dog_t *newdog;
n = j = o = 0;
if (name == NULL || owner == NULL)
{
return (NULL);
}
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
return (NULL);
}
while (name[n] != '\0' && owner[o] != '\0')
{
n++;/* get length of name*/
o++;
}
newdog->name = malloc(sizeof(char) * n);
newdog->owner = malloc(sizeof(char) * o);
if (newdog->name == NULL || newdog->owner == NULL)
{
return (NULL);
}
for (i = 0; i <= n; i++)
{
newdog->name[i] = name[i];
}
newdog->age = age;
for (; j < o; j++)
{
newdog->owner[j] = owner[j];
}
return (newdog);
}
