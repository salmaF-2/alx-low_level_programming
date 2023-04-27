#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: pointer to pointer to the head of the list
 * @str: string to be added to the list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node = malloc(sizeof(list_t));
list_t *temp = *head;
char *str_copy = strdup(str);
if (str == NULL)
return (NULL);
if (new_node == NULL)
return (NULL);
if (str_copy == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = str_copy;
new_node->len = strlen(str_copy);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
