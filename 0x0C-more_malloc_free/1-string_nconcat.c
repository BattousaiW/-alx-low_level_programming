#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *string_nconcat - a function that concatenates two strings.
 *@s1:  first char variable
 *@s2: Second char variable
 *@n: integer varible to equate length
 *Return: if failed returns null
 *else return concat string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
int len1 = strlen(s1);
int len2 = n;
if (n >= strlen(s2))
{
len2 = strlen(s2);
}
char *new_string = malloc(len1 + len2 + 1);
if (new_string == NULL)
{
return (NULL);
}
memcpy(new_string, s1, len1);
memcpy(new_string + len1, s2, len2);
new_string[len1 + len2] = '\0';
return (new_string);
}
