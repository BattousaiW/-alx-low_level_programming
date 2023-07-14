#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
*_realloc- a function that reallocates a memory block using malloc and free
*@ptr: void pointer variable
*@old_size: previous array size
*@new_size: new array size
*Return: if failed returns null
*else returns pointer to new memory size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (ptr == NULL && new_size != 0)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);
return (new_ptr);
}
