#include "main.h"

/**
 *  * _strchr - function that locates a character in a string.
 *   * @s: string
 *    * @c: character
 *     * Return: to the first occurrence of c or NULL if c is not found.
 *      */
char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return ("");
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
