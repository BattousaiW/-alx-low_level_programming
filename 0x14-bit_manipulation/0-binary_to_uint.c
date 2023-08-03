#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint- function to converts binary to usigned int.
 * @b: pointer to char value.
 * Return: return unsigned int value
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int val, i;
int len;
val = 0;
i = 1;

if (*b == '\0')
return (0);

for (len = 0; b[len];)
len++;
for (len -= 1; len >= 0; len--)
{
if (b[len] != '0' && b[len] != '1')
return (0);

val += (b[len] - '0') * i;
i *= 2;
}

return (val);
}
