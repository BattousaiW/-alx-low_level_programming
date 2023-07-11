/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of argus
 * @argv: An array args
 * Return: If one of the numbers contains chars that are non-digits - 1.Otherwise - 0.
 */
#include <stdio.h>
#include "main.h"

int main(int argc, char *argv[])
{
int a, b, c = 0;

for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b]; b++)
{
if (argv[a][b] < '0' || argv[a][b] > '9')
{
printf("Error\n");
return (1);
}
}

c += _atoi(argv[a]);
}

printf("%d\n", c);

return (0);
}
