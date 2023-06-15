#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: pointer to head
 * Return: sum of all the data (n)  or 0
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0, i;
dlistint_t *c = head;
for (i = 0; c; i++)
{
sum += c->n;
c = c->next;
}
return (sum);
}
