#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list print;
va_start(print, n);
for (i = 0; i < n; i++)
{
char *str = va_arg(print, char *);
printf("%s", str);
if (str == NULL)
{
printf("(nil)");
}
if (i != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(print);
}
