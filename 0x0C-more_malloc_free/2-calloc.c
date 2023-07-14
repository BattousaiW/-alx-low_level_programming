#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *_calloc - a function that concatenates two strings.
 *@nmemb: int variable
 *@size: size of memory
 *Return: if failed returns null
 *else returns pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int total_size;
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

total_size = nmemb * size;
ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}

memset(ptr, 0, total_size);
return (ptr);
}
