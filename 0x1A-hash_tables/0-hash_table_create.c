#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array
 * Return: pointer to the newly created hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *htble = NULL;
unsigned long int i;
htble = malloc(sizeof(hash_table_t));
if (htble == NULL)
return (NULL);
htble->array = malloc(sizeof(hash_node_t *) * size);
if (htble->array == NULL)
{
free(htble);
return (NULL);
}
for (i = 0; i < size; i++)
htble->array[i] = NULL;
htble->size = size;
return (htble);
}
