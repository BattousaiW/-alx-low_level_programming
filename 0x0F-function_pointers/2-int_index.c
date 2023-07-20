#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for one value in an array
 * @array: an array
 * @size: size of array
 * @cmp: A pointer to the function to equate values
 * Return: if no element is found -1
 * else - the index of the searched element
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
