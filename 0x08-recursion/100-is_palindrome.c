#include "main.h"
#include <string.h>

/**
 * method - test palindrome
 * @s: string
 * @f: first index
 * @l: last index
 * Return: 1 if true, 0 if false
 */
int method(char *s, int f, int l)
{
if (f == l)
{
return (1);
}
else if (f > l)
{
return (1);
}
else if (s[f] != s[l])
{
return (0);
}
else
{
return (method(s, f + 1, l - 1));
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
int len = strlen(s);
return (method(s, 0, len -  1));
}
