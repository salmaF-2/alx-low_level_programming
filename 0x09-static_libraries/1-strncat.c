#include "main.h"

/**
 * _strncat - concatenates two strings.using at most n bytes of  src
 * @dest: destination string
 * @src: source string
 * @n: max number of bytes from src
 * Return: to dest
 */
char *_strncat(char *dest, char *src, int n)
{
char *p = dest;
int i = 0;
while (*p != '\0')
{
p++;
}
while (i < n && *src != '\0')
{
*p = *src;
p++;
src++;
i++;
}
*p = '\0';
return (dest);
}
