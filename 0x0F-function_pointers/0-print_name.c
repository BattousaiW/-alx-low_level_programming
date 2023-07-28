#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: char pointer variable
 * @f: a pointer to the function that prints the name
*/

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
f(name);
}