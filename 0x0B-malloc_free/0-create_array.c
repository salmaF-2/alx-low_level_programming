#include "main.h"
/**
 * create_array -  function that creates an array of chars,
 *  and initializes it with a specific char.
 *  @size: size of array
 *  @c: character
 *  Return: pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(sizeof(char) * size);
if (arr == NULL || size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
