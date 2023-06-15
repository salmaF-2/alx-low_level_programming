#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list.
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *c;
while (head != NULL)
{
c = head;
head = head->next;
free(c);
}
}
