/**
*main - returns all recieved args
*@argc: number of arguments
*@argv: array of args
*Return: 0
*/
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
int j;
for (j = 0; j < argc; j++)
{
printf("%s\n", argv[j]);
}
return (0);
}
