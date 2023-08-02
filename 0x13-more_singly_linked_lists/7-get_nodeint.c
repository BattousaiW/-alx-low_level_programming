#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Locates a node in a given list
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node
 * Return: If the node is not found - NULL.
 * else- the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int node;

for (node = 0; node < index; node++)
{
if (head == NULL)
return (NULL);

head = head->next;
}

return (head);
}
