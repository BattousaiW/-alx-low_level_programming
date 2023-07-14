#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: an unsigned integer value
 * Return: if malloc fails returns a value of 98
 * else returns success
*/ 

void *malloc_checked(unsigned int b)
{
void *p = malloc(b);
if (p == NULL)
{
exit (98);
}
return (p);
}
