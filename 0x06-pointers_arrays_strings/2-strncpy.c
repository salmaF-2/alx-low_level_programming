#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: size of source string
 * Return: to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n && *src != '\0')
{
*dest = *src;
i++;
}
while (i < n)
{
*dest = '\0';
i++;
}
return (dest);
}
