#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * struct variable_type - Struct variable_type
 * @type: The data type
 * @f: The function pointer
 */
typedef struct variable_type
{
char type;
void (*f)(va_list);
} variable_type;

/**
 * printf_c - print a character.
 * @arg_variables: list of arguments.
 * Return: void
 */
void printf_c(va_list arg_variables)
{
printf("%c", va_arg(arg_variables, int));
}
/**
 * printf_i - print an integer.
 * @arg_variables: arguments
 * Return: void
 */
void printf_i(va_list arg_variables)
{
printf("%i", va_arg(arg_variables, int));
}
/**
 * printf_f - print a float.
 *
 * @arg_variables: list of arguments.
 */
void printf_f(va_list arg_variables)
{
printf("%f", va_arg(arg_variables, double));
}
/**
 * printf_s - print a string.
 * @arg_variables: arguments
 * Return: void
 */
void printf_s(va_list arg_variables)
{
char *p;
p = va_arg(arg_variables, char *);
if (p == NULL)
p = "(nil)";
printf("%s", p);
}
/**
 * print_all - prints all.
 * @format: last argument.
 * Return: void
 */
void print_all(const char * const format, ...)
{
int i = 0;
int j = 0;
char *sep = "";
va_list arg_variables;
variable_type var[] = {
{'c', printf_c},
{'i', printf_i},
{'f', printf_f},
{'s', printf_s},
{'\0', NULL}
};
va_start(arg_variables, format);
while (format && format[i])
{
j = 0;
while (var[j].type)
{
if (format[i] == var[j].type)
{
printf("%s", sep);
var[i].f(arg_variables);
sep = ", ";
break;
}
j++;
}
i++;
}
printf("\n");
va_end(arg_variables);
}

