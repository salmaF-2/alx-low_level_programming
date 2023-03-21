#include "main.h"

/**
 * _abs -  the absolute value of an integer.
 * @i: integer
 * Return: absolute value or 0
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
if (i < 0)
{
return (i * -1);
}
else
{
return (0);
}
}
