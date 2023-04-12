#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array contains arguments
 * Return: pointer to new string or NULL
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *s;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
len++;
j++;
}
len++;
}
s = malloc((len + 1) * sizeof(char));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
s[k++] = av[i][j++];
}
s[k++] = '\n';
}
s[k] = '\0';
return (s);
}
