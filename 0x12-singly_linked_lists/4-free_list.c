#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
list_t *temp = head;
list_t *next_node = temp->next;
while (temp != NULL)
{
free(temp->str);
free(temp);
temp = next_node;
}
}
