#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves
 * value associated with a key.
 * @ht: hash table you want to look into
 * @key:  the key you are looking for
 * Return: value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *current;
unsigned long int i;
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);
i = key_index((unsigned char *)key, ht->size);
current = ht->array[i];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (strdup(current->value));
current = current->next;
}
return (NULL);
}
