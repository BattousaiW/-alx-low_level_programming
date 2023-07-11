/**
 * main - Prints the multiplication of two numbers, followed by a new line.
 * @argc: The number of args
 * @argv: An array of args
 * Return: If the program receives two arguments - 0.
 * else the program does not receive two arguments - 1.
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
int a, b, c;
if (argc != 3)
{
printf("Error\n");
return (1);
}

a = _atoi(argv[1]);
b = _atoi(argv[2]);
c = a *b;

printf("%d\n", c);

return (0);
}
