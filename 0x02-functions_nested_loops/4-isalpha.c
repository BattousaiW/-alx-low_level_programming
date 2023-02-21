#include "main.h"
/**
 * _isalpha(int c)- checks for upper case character
 * @c : a char variable
 * Return: 1 if uppercase. 0 if anything else
 **/

int _isalpha(int c)
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
