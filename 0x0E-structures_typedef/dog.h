#ifndef DOG_H
#define DOG_H
/**
 *struct dog - dog structure
 *@name: dog name pointer
 *@age: dog age pointer
 *@owner: owner pointer
 */
struct dog
{
char *name;
float age;
char *owner;
};
/* use the typedef to define a new dog*/
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
