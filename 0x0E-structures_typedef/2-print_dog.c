#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
*print_dog - a function that prints the dog struct
*@d : pointer to dog variable
*/

void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

if (d->age > 0)
{
printf("Age : %.1f\n", d->age);
}
else
{
printf("Age: (nil)\n");
}

if (d->owner != NULL)
{
printf("Owner : %s\n", d->owner);
}
else
{
printf("Owner: (nil)\n");
}
}