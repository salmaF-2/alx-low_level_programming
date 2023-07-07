#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: the key can not be an empty string
 * @value: the value associated with the key must be duplicated
 * can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht,
const char *key, const char *value)
{
hash_node_t *new, *current;
unsigned long int i;
if (ht == NULL || key == NULL || *key == '\0')
return (0);
i = key_index((unsigned char *)key, ht->size);
current = ht->array[i];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
return (1);
}
current = current->next;
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
return (0);
new->key = strdup(key);
new->value = strdup(value);
if (new->key == NULL || new->value == NULL)
{
free(new->key);
free(new->value);
free(new);
return (0);
}
new->next = ht->array[i];
ht->array[i] = new;
return (1);
}
