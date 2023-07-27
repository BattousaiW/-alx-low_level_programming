#include <stdio.h>
#include "lists.h"
/**
 * print_list- prints a list of nodes
 * @h: list to be printed
 * Return: return count
*/

size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;
while (current != NULL)
{
printf("[%zu] %s\n", count, current->str);
count++;
current = current->next;
}
return (count);
}
