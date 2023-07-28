#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * list_len- prints a list of nodes
 * @h: list to be printed
 * Return: return (num) length of list
*/
size_t list_len(const list_t *h)
{
size_t num = 0;

while (h)
{
h = h->next;
num++;
}

return (num);

}
