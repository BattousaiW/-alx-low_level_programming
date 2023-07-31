#include "lists.h"
#include <stdio.h>

/**
 * listint_len - a function that returns length of a linked list
 * @h: A pointer to a linked list
 *
 * Return: The number of elements in list
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;

while (h)
{
nodes++;
h = h->next;
}

return (nodes);
}
