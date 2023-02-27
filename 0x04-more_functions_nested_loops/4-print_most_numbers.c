#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9
 * Return: void return
 */

void print_most_numbers(void)
{
int a, b;

a = 48;
b = 58;

while (a < b)
{
if (a == 50 || a == 52)
{
a++;
}
else
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
