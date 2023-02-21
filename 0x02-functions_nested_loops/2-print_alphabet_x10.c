#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i,j;

for (i = 0 ; i < 10 ; i++)
{
for (j = 97 ; i <= 122; i++)
{
_putchar(i);
}
}
_putchar('\n');
}
