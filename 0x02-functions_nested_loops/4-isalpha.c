#include "main.h"
/**
 * _isalpha(int c)- checks for upper and lower case character
 * @c : a char variable
 * Return: 1 if uppercase. 0 if anything else
 **/

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
