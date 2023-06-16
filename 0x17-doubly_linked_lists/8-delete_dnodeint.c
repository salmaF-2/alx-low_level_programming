#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head:pointer to pointer to head
 * @index: is the index of the node that should be deleted
 * Return: 1 if it succeeded, -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *c, *temp;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
c = *head;
if (index == 0)
{
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(c);
return (1);
}
for (i = 0; i < index && c != NULL; i++)
c = c->next;
if (c == NULL)
return (-1);
temp = c;
c->prev->next = c->next;
if (c->next != NULL)
c->next->prev = c->prev;
free(temp);
return (1);
}
