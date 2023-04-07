#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (wildcmp(s1, s2 + 1) == 1)
{
return (1);
}
return (wildcmp(s1 + 1, s2));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
else if (*s1 == '\0' && *s2 != '\0')
{
return (0);
}
else
{
return (0);
}
}
