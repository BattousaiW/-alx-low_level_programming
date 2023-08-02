#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Calculates the sum of a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: If the list is empty - 0.
 * else- the sum of the list
 */
int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
