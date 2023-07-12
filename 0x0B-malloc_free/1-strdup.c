#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - Returns a pointer to a newly-allocated memory space
*@str: char string to be copied
*Return: a pointer to a copy of the string
*        else NULL is returned
*/

char *_strdup(char *str)
{
char *res;
int len, i;
len = 0;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i]; i++)
{
len++;
}
res = malloc((len + 1) * sizeof(char));
if (res == NULL)
{
return (NULL);
}

for (i = 0; str[i]; i++)
{
res[i] = str[i];
}

res[len] = '\0';

return (res);
}
