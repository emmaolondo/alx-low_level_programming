#include "dog.h"
#include <stdlib.h>

/**
 *str_cpy - a function that copies one string to another
 *@src: source string
 *@dest: destination string
 *
 *
 *Return: dest
 */
char *str_cpy(char *dest, char *src)
{
int i;
i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
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
int n, o;
dog_t *newdog;
n =  o = 0;
if (name == NULL || owner == NULL)
{
return (NULL);
}
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
{
free(newdog);
return (NULL);
}
while (name[n] != '\0' && owner[o] != '\0')
{
n++;/* get length of name*/
o++;
}
newdog->name = malloc(sizeof(char) * n);
newdog->owner = malloc(sizeof(char) * o);
if (newdog->name == NULL)
{
free(newdog->name);
free(newdog);
return (NULL);
}
newdog->name = str_cpy(newdog->name, name);
newdog->age = age;
if (newdog->owner == NULL)
{
free(newdog->owner);
free(newdog);
return (NULL);
}
newdog->owner = str_cpy(newdog->owner, owner);
return (newdog);
}
