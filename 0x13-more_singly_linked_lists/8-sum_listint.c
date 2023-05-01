#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: pointer to head of list
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
int sum = 0;
int i;
for (i = 0; head != NULL; head = head->next)
{
sum += head->n;
i++;
}
return (sum);
}
