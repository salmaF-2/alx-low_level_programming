#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0;
unsigned int convnum = 0;
if (b == NULL)
return (0);
while (b[i] != '\0')
{
if (b[i] == '0')
convnum = (convnum << 1) | 0;
else if (b[i] == '1')
convnum = (convnum << 1) | 1;
else
return (0);
i++;
}
return (convnum);
}
