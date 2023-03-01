#include "main.h"
#include <string.h>
/**
 * _strcat - a function that combines strings
 * @dest : a string
 * @src : a string
 * Return : char is returned
*/

char *_strcat(char *dest, char *src)
{
char *var;
var = strcat(dest,src);

return (var);
}
