#include <stdio.h>
#include "main.h"
#include <stdarg.h>
/**
 * _specifier - to specify char after % or the char itself
 * Description: fn to specify characters and specifiers
 * @list: list of args
 * @str: string to be searched
 * @index: index of string  to get character
 * Return: number of printed characters
 */
int _specifier(va_list list, const char *str, int *index)
{
	int nump = 0;

	if (str[*index] == '%')
	{
		switch (str[(*index) + 1])
		{
			case 'c':
				{
					nump = nump + _printchar(va_arg(list, int));
					(*index)++;
					break;
				}
			case 's':
				{
					nump = nump + _printstring(va_arg(list, char *));
					(*index)++;
					break;
				}
			case '%':
				{
					nump = nump + _printchar('%');
					(*index)++;
					break;
				}
			case 'd':
			case 'i':
				{
					nump = nump + _printdecimal(va_arg(list, int));
					(*index)++;
					break;
				}
		}
	}
	else
	{
		nump = nump + _printchar(str[*index]);
	}
	(*index)++;
	return (nump);
}
