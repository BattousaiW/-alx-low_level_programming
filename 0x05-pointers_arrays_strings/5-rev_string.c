#include "main.h"
/**
* rev_string - print a string in reverse
* @s : stores a string 
* Return : void.
*/

void rev_string(char *s)
{
int len, i;
len = _strlen(s);
char *str[len];
for (i = len; i > 0; i--)
{
str[i] = s[i];
}

}
