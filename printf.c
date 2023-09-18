#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - fn call other fns to print the string and args if specified
 * Description: fn call other fns to print the string and args if specified
 * @format: const string to be printed including specifiers
 * Return: number of printed characters
 */
int _printf(const char *format, ...)
{
	int i = 0, nump = 0;
	va_list list;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	while (format[i] != 0)
	{
		nump = nump + _specifier(list, format, &i);
	}
	va_end(list);
	return (nump);
}
