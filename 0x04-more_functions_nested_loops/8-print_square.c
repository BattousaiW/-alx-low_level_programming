#include "main.h"

/**
 * print_square - prints square as output
 * @size: is an integer value
 * Return: void return
 */

void print_square(int size)
{
int i, j;

for (i = 1; i <= size; i++)
{
for(j = 1; j <= size; j++)
{
_putchar(35);
}
_putchar('\n');
}

}
