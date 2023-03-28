#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int findArgumentsNumber(const char *format)
{
	int i;
	int count = 0;

	for (int i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
			count++;
	}
	return count;
}

/**
 * _printf - produces output according to a format.
 * @format: character string
 * @...: unlimited arguments
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int nb_of_args = findArgumentsNumber(format);

	va_list arguments;

	va_start(arguments, format);

	va_end(arguments);
	return (0);
}
