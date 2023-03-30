#include "main.h"
/**
 * rot13 - function that encodes a string using rot13.
 * @s: string
 * Return: to string
 */
char *rot13(char *s)
{
int i, j;
char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 51; j++)
{
if (s[i] == a[j])
{
s[i] = rot13[j];
break;
}
}
}
return (s);
}
