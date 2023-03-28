#include "main.h"
/**
 * _strcpy - that copies the string pointed to by src
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *  Return value: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return dest;
}
