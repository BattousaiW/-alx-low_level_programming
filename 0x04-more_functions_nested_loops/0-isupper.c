#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for upper case letter
 * @c: is a integer value
 * Return: 1 if uppercase character else return 0 
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
