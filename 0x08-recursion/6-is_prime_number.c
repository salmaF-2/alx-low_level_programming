#include "main.h"
/**
 *
 *
 *
 */
int mod(int a, int i)
{
if (a <= 1)
{
return (0);
}
else if (a == i)
{
return (1);
}
else if (a % i == 0)
{
return (0);
}
else
{
return (mod(a, i + 1));
}
}

/**
 * is_prime_number -  returns 1 if the input integer
 * is a prime number or 0
 * @n: number
 * Return: 1 if it's a prime number or 0
 */
int is_prime_number(int n)
{
return (mod(n, 2));
}
