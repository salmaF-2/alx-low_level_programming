#include "main.h"
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: first bytes of s2
 * Return: to newly allocated space contains s1,
 * followed by the first n bytes of s2 or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *p;
int len1, len2, i, j;
int b = n;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
if (b < 0)
return (NULL);
len2 = strlen(s2);
if (b > len2)
b = len2;
len1 = strlen(s1);
p = malloc((len1 + b + 1) * sizeof(*p));
if (p == NULL)
{
return (NULL);
}
i = 0;
while (s1[i] != '\0')
{
p[i] = s1[i];
i++;
}
j = 0;
while (j < b)
{
p[i] = s2[j];
i++;
j++;
}
p[i] = '\0';
return (p);
}
