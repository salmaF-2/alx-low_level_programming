#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer of the head of list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
size_t len;
const list_t *temp = h;
for (len = 0; temp != NULL; temp = temp->next)
{
len++;
}
return (len);
}
