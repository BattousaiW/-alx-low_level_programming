#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list.
 * @head: A pointer to the head of the linked list
 *
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node removed
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int x;

if (*head == NULL)
return (0);

temp = *head;
x = (*head)->n;
*head = (*head)->next;

free(temp);

return (x);
}
