#include "main.h"
#include <string.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr:  pointer to the memory previously allocated
 * @old_size: size of  allocated space for ptr
 * @new_size:  new size, in bytes of the new memory block
 * Return: pointer or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *c;
unsigned int copy_size;
if (new_size == old_size)
return (ptr);
if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
c = malloc(new_size);
if (c == NULL)
return (NULL);
return (c);
}
c = malloc(new_size);
if (c == NULL)
return (NULL);
copy_size = old_size < new_size ? old_size : new_size;
memcpy(c, ptr, copy_size);
free(ptr);
return (c);
}
