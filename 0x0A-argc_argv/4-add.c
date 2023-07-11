#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"
/**
 * test_num - test the string
 * @s: array str
 *
 * Return: Always 0 (Success)
 */
int test_num(char *s)
{
unsigned int num;

num = 0;
while (num < strlen(s))
{
if (!isdigit(s[num]))
{
return (0);
}
num++;
}
return (1);
}

/**
 * main - Print the name of the program
 * @argc: number of args
 * @argv: array of args
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num;
int strToInt;
int sum = 0;
num = 1;
while (num < argc)
{
if (test_num(argv[num]))
{
strToInt = atoi(argv[num]);
sum += strToInt;
}
else
{
printf("Error\n");
return (1);
}
num++;
}
printf("%d\n", sum);
return (0);
}
