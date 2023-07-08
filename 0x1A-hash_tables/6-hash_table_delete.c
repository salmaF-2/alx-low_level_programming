#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *n, *temp;
unsigned long int i;
if (ht == NULL)
return;
for (i = 0; i < ht->size; i++)
{
n = ht->array[i];
while (n != NULL)
{
temp = n->next;
free(n->key);
free(n->value);
free(n);
n = temp;
}
}
free(ht->array);
free(ht);
}
