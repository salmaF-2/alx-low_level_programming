#include "main.h"
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * Return: to pointer contains s1 ou NULL
 */
char *str_concat(char *s1, char *s2)
{
char *p;
unsigned int len1, len2;
unsigned int i, j;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
p = malloc((len1 + len2 + 1) * sizeof(char));
if (p == NULL)
{
return (NULL);
}
i = 0, j = 0;
while (s1[i] != '\0')
{
p[j] = s1[i];
i++;
j++;
}
i = 0;
while (s2[i] != '\0')
{
p[j] = s2[i];
i++;
j++;
}
p[j] = '\0';
return (p);
}
