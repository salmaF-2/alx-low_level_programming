#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: character
 * Return: to the first occurrence of c or NULL if c is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
if (c == '\0')
{
return (0);
}
s++;
}
return (0);
}
