#include "main.h"

/**
 * slen - return length of string
 * @s: string
 * Return: length of s
 */

int slen(char *s)
{
if (*s == '\0')
{
return (0);
}
else
{
return (1 + slen(s + 1));
}
}
/**
 * is_palindrome - returns 1 if a string is a palindrome
 *  and 0 if not.
 *  @s: string to check
 *  Return: 1 or 0
 */
int is_palindrome(char *s)
{
int len = slen(s);
if (len <= 1)
{
return (1);
}
else if (*s == *(s + len - 1))
{
return (is_palindrome(s + 1) && 1);
}
else
{
return (0);
}
}
