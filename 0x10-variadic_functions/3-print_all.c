#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - Prints anything
 *
 * @format: List of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *separator = "";
	va_list args;
	format_t formats[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].type)
		{
			if (format[i] == formats[j].type)
			{
				printf("%s", separator);
				formats[j].func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

/**
 * print_c - Prints a char
 *
 * @arg: va_list argument pointer
 *
 * Return: void
 */
void print_c(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_i - Prints an int
 *
 * @arg: va_list argument pointer
 *
 * Return: void
 */
void print_i(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_f - Prints a float
 *
 * @arg: va_list argument pointer
 *
 * Return: void
 */
void print_f(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_s - Prints a string
 *
 * @arg: va_list argument pointer
 *
 * Return: void
 */
void print_s(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}
