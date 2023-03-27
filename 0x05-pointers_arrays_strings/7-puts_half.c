#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
int i, j;
int length = 0;
while (str[length] != '\0')
{
length++;
}
if (length % 2 == 0)
{
j = length / 2;
}
else
{
j = (length - 1) / 2;
}
for (i = j; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
