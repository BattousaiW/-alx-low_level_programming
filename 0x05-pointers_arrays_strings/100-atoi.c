#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
unsigned int len = 0, n = 0, a = 0, b = 1, c = 1, i;
while (*(s + len) != '\0')
{
if (n > 0 && (*(s + len) < '0' || *(s + len) > '9'))
break;
if (*(s + len) == '-')
b *= -1;
if ((*(s + len) >= '0') && (*(s + len) <= '9'))
{
if (n > 0)
{
c *= 10;
n++;
}
}
len++;
}
for (i = len - n; i < len; i++)
{
a = a + ((*(s + i) - 48) * c);
c /= 10;
}
return (a * b);
}
