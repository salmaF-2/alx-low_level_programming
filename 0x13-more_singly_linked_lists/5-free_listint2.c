#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
listint_t *current;
if (head == NULL)
return;
while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}
}
