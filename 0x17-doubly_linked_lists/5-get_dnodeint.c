#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head
 * @index: index of the node, starting from 0
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *c = head;
unsigned int i;
for (i = 0; c; i++)
{
if (i == index)
return (c);
c = c->next;
}
return (NULL);
}
