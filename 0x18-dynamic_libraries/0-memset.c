#include "main.h"
/**
 *  * _memset - function that fills memory with a constant byte
 *   * @s: pointer to the memory area
 *    * @b: the constant byte b
 *     * @n:  first n bytes of the memory
 *      * Return: to s
 *       */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
