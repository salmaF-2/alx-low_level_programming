#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to pointer to head
 * Return: the head node’s data (n). or 0
 */
int pop_listint(listint_t **head)
{
int m;
listint_t *temp;
if (head == NULL)
return (0);
m = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;
return (m);
}
