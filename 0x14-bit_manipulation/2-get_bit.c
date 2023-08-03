#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: a bit.
 * @index: The index to get the value
 *
 * Return: If an error occurs return -1.
 *         else - The value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8))
return (-1);

if ((n & (1 << index)) == 0)
return (0);

return (1);
}
