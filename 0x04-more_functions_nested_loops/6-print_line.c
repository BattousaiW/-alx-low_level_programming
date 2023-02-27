#include "main.h"

/**
 * print_line - prints line as output
 * @n: is an integer value
 * Return: void return
 */

void print_line(int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i <= 0)
{
_putchar('\n');
}
_putchar(95);
}
}
