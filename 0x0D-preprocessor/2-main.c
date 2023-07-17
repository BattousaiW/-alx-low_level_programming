#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from
 *Return: returns the file name
*/

int main(void)
{
char *filename = __FILE__;
printf("%s\n", filename);
return (0);
}
