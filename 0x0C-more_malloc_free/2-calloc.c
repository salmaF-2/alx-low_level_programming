#include "main.h"
/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: array
 * @size: size of array
 * Return: pointer to the allocated memory. or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
p = malloc(size * nmemb);
if (p == 0)
{
return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
((char *)p)[i] = 0;
}
return (p);
}
