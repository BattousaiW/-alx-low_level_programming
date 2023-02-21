#include "main.h"

/**
 * _islower(int c)- checks for lower case character
 * @c : a char variable
 * Return: 1 if lowercase. 0 if anything else
 **/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
