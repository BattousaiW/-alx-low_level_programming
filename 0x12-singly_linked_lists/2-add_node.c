#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node- adds a new node to the list
 * @head: the head node
 * @str: string to be added
 * Return: new list with node added
 * else return null
*/


list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
if (head != NULL && str != NULL)
{
temp = malloc(sizeof(list_t));
if (temp == NULL)
{
return (NULL);
}
temp->str = strdup(str);
temp->len = strlen(str);
temp->next = *head;

return (temp);
}
return (0);
}
