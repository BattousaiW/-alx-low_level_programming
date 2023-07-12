#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - initializes an array of specified size
 * @c: char to inititialize array
 * @size: the size of the memory to print
 *
 * Return: array is returned when successful.
 * NULL is returned if failed
 */
char *create_array(unsigned int size, char c)
{
char *array = (char *)malloc(size * sizeof(char));
if (array == NULL)
{
return (NULL);
}
for (unsigned int i = 0; i < size; i++)
{
array[i] = c;
}
return (array);
}