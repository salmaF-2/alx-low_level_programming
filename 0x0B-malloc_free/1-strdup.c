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
unsigned int i, len;
char *dup;
len = strlen(str);
dup = malloc((len + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}
if (dup == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
dup[i] = str[i];
}
return (dup);
}
