#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
int i = 0;
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = len - 1; i >= len / 2; i--)
{
char temp;
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
