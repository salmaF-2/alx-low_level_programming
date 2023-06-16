#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: pointer to pointer to head
 * @idx:  the index of the list where the new node should be added
 * @n: node
 * Return: address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *c;
unsigned int i;
if (h == NULL)
return (NULL);
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->prev = NULL;
new->next = NULL;
if (idx == 0)
{
new->next = *h;
if (*h != NULL)
(*h)->prev = new;
*h = new;
}
else
{
c = *h;
for (i = 0; i < idx - 1 && c != NULL; i++)
c = c->next;
if (c == NULL)
{
free(new);
return (NULL);
}
new->next = c->next;
if (c->next != NULL)
c->next->prev = new;
c->next = new;
new->prev = c;
}
return (new);
}
