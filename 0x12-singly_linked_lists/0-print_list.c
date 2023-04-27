#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: a pointer of the head of list_t list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t i;
const list_t *temp = h;
for (i = 0; temp != NULL; temp = temp->next)
{
if (temp->str != NULL)
{
printf("[%u] %s\n", temp->len, temp->str);
}
else
{
printf("[0] (nil)\n");
}
i++;
}
return (i);
}
