#include "main.h"
#include <string.h>
/**
 * _strdup -  function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: a pointer or NULL
 */
char *_strdup(char *str)
{
unsigned int i;
char *dup;
dup = malloc((strlen(str) + 1) * sizeof(char));
if (str == NULL || dup == NULL)
{
return (NULL);
}
for (i = 0; i <= strlen(str); i++)
{
dup[i] = str[i];
}
return (dup);
}
