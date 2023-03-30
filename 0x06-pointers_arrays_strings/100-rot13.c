#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: to string
 */
char *rot13(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
{
s[i] = s[i] + 13;
}
else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
{
s[i] = s[i] - 13;
}
}
return (s);
}
