#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key
 * @size: size of the array of the hash table
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char
*key, unsigned long int size)
{
unsigned long int k;
unsigned long int i;
k = hash_djb2(key);
i = k % size;
return (i);
}
