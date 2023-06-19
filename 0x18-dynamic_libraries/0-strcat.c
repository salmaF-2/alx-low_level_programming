#include "main.h"

/**
 *  * *_strcat - function that concatenates two strings.
 *   * @dest:first string
 *    * @src: second string
 *     * Return: dest
 *      */
char *_strcat(char *dest, char *src)
{
	char *p = dest;
	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
