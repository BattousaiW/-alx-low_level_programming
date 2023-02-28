#include "main.h"
/**
 * print_array - prints an array
 * @a : int pointer
 * @n : interger value for size of array
 * Return : void
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
_puts((a[i]));
}
_putchar('\n');
}
