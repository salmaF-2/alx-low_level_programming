#include "main.h"
/**
 * square - test the number before root
 * @a: same to n
 * @b: number that iterates from 1 to n
 * Return: b or -1
 */
int square(int a, int b)
{
if (b * b == a)
{
return (b);
}
else if (b * b > a)
{
return (-1);
}
else
{
return (square(a, b + 1));
}
}

/**
 * _sqrt_recursion - natural square root of a number.
 * @n: number
 * Return: square root or -1
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0 || n == 1)
{
return (n);
}
else
{
return (square(n, 1));
}
}
