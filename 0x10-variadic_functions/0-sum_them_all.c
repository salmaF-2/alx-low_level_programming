#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list nptr;
if (n == 0)
{
return (0);
}
va_start(nptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(nptr, int);
}
va_end(nptr);
return (sum);
}
