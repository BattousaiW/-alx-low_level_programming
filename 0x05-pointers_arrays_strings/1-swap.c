#include "main.h"

/**
 * swap_int - takes a pointer to a parameter and updates its value.
 * @a: pointer.
 * @b: pointer.
 * Return: void return.
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;

}
