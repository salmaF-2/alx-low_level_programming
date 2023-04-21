#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list args;
char *sval;
int ival;
double dval;
char cval;
const char *p;
int first_arg = 1;
va_start(args, format);
p = format;
while (*p != '\0')
{
if (*p == 'c')
{
cval = va_arg(args, int);
printf("%c", cval);
}
else if (*p == 'i')
{
ival = va_arg(args, int);
printf("%d", ival);
}
else if (*p == 'f')
{
dval = va_arg(args, double);
printf("%f", dval);
}
else if (*p == 's')
{
sval = va_arg(args, char *);
if (sval == NULL)
{
printf("(nil)");
}
else
{
printf("%s", sval);
}
}
p++;
if (*p != '\0' && (*p == 'c' ||
*p == 'i' ||
*p == 'f' ||
*p == 's'))
{
printf(", ");
}
}
printf("\n");
va_end(args);
}
