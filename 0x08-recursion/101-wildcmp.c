#include "main.h"

/**
 * wildcmp - function that compares two strings
 * @s1: string1
 * @s2: string2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}

