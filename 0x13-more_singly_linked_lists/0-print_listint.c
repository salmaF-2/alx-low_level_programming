#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - that prints all the elements of a listint_t list.
 * @h: pointer to head of list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
size_t i;
for (i = 0; h != NULL; h = h->next)
{
printf("%d\n", h->n);
i++;
}
return (i);
}
