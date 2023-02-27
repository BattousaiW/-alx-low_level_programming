#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 * Return: void return
 */

void print_line(int n)
{
int m;
m = 0;
if(n <= 0)
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
