#include <stdlib.h>
#include "dog.h"
/**
 * init_dog- a void function that initializes a struct dog
 * @d: pointer to dog struct
 * @name: initializes dog name
 * @age: initializes dog age
 * @owner: initilizes dog owner
 * Return: void return
 *
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
