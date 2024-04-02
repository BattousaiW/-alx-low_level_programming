#include "search_algos.h"

/**
 * linear_search - Searches for value in array of integers using Linear search
 * @array: Pointer to first element of array to search
 * @size: Number of elements in array
 * @value: Value to search
 *
 * Return: First index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
