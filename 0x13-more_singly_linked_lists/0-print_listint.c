#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint- a funtion to print a linked list
 * @h: pointer to linked list
 * Return: print the elements of the list
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
printf("%d\n", h->n);
h = h->next;
}
return (nodes);
}
