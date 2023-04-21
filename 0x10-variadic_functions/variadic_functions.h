#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct format - Struct format
 *
 * @type: Type of argument
 * @func: Pointer to function to print argument
 */
typedef struct format
{
char type;
void (*func)(va_list);
} format_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
