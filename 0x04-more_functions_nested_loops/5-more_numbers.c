#include "main.h"

/**
 * more_numbers- prints numbers 0 to 14 10 times
 * Return: void return
 */

void more_numbers(void)
{
int a, b, c;

a = 48;

for (c = 0; c < 10; c++)
{
for (b = 0; b < 15; b++)
{
if (b >= 10)
{
_putchar((b / 10) + a);
}

_putchar((b % 10) + 48);
}
_putchar('\n');
}
}
