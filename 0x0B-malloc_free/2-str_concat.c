#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated.
 * @s2: The string to be concatenated.
 * Return: a pointer the newly-allocated space in memory
 *         else - If concatenation fails - NULL.
 *
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, c_index = 0, len = 0;

if (s1 == NULL)
    s1 = "";

if (s2 == NULL)
    s2 = "";

for (i = 0; s1[i] || s2[i]; i++)
    len++;

concat = malloc(sizeof(char) * len);

if (concat == NULL)
    return (NULL);

for (i = 0; s1[i]; i++)
    concat[c_index++] = s1[i];

for (i = 0; s2[i]; i++)
    concat[c_index++] = s2[i];

return (concat);
}

