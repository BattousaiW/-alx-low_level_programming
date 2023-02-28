#include "main.h"
/**
* rev_string - print a string in reverse
* @s : stores a string 
* Return : void.
*/

void rev_string(char *s)
{
int len = 0, i, j;
char *str, a;
while (len >= 0)
{
if (s[len] == '\0')
break;
len++;
}
str = s;
for (i = 0; i < (len - 1); i++)
{
for (j = i + 1; j > 0; j--)
{
a = *(str + j);
*(str + j) = *(str + (j - 1));
*(str + (j - 1)) = a;
}
}
}
