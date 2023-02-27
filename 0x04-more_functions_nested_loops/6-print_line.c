#include "main.h"

/**
 * print_line - prints line as output
 * @n: is an integer value
 * Return: void return
 */

void print_line(int n)
{
int m;
m = 0;
if (n <= 0)
{
_putchar('\n');
}
else
{
while (m < n)
{
_putchar('_');
m++;
}
}
}
