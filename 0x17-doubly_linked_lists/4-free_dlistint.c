#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *c = head;
dlistint_t *temp = c;
while (c != NULL)
{
c = c->next;
free(temp);
}
}
