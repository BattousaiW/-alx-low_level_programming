#include "main.h"

/**
 * print_diagonal - prints diagonal as output
 * @n: is an integer value
 * Return: void return
 */

void print_diagonal(int n)
{
int i;
for (i = 0; i < n; i++)
{
_putchar(' ');
_putchar('\\\n');
}
_putchar('\n');
}
