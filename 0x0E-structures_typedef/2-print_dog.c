#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*print_dog - a function that prints the dog struct
*@d : pointer to dog variable
*/

void print_dog(struct dog *d)
{
if (d != NULL)
{
printf("name: %s\n",d->name);
printf("age : %.1f\n",d->age);
printf("owner : %s\n",d->owner);
}
}
