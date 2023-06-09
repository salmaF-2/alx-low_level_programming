#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to pointer to head of list
 * @str: string
 * Return:  the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
char *scopy = strdup(str);
list_t *new = malloc(sizeof(list_t));
if (head == NULL || str == NULL)
return (NULL);
if (new == NULL)
return (NULL);
if (scopy == NULL)
{
free(new);
return (NULL);
}
new->str = scopy;
new->len = strlen(scopy);
new->next = *head;
*head = new;
return (new);
}
