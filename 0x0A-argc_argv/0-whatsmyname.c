/**
*main - returns the name of the program
*@argc: number of arguments
*@argv: array of args
*Return: Always 0
*/
#include <stdio.h>
#include "main.h"

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
