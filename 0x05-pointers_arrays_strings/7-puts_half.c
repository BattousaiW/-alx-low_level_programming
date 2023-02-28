#include "main.h"
/**
 * puts2 - prints half of a string
 * @str : string pointer
 * Return : void
*/

void puts_half(char *str)
{
int i, len;
len = _strlen(str);
len = len / 2;
for (i = 0;i < len;i++)
{
_putchar(str[len]);
}
_putchar('\n');
}
