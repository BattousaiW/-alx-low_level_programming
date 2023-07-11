/**
*main - returns the number of args passed to the program
*@argc: number of args
*@argv: array of args
*Return: Always 0
*/
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
