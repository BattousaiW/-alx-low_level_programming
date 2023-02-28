#include "main.h"
/**
 * puts2 - prints every other character;
 * @str : string pointer
 * Return : void
*/

void puts2(char *str)
{
int len, i;
len =  _strlen(str);
for (i = 0;i < len ; i++)
{
if (i % 2 == 0)
{
_puts(str[i]);
}

}
}
