#include "main.h"

/**
 * print_sign(int n)- checks if int is positive or negative
 * @n : a int variable
 * Return: 1 if positive. 0 if zero,return -1 if negative if less then 0
 *
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
