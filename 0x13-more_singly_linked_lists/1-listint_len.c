#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to head of list
 * Return: number of elements in a linked
 */
size_t listint_len(const listint_t *h)
{
size_t len;
for (len = 0; h != NULL; h = h->next)
{
len++;
}
return (len);
}
