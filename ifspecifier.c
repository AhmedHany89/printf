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
	int z;
	/**
	 * struct format d_type[] - struct
	 * Description: specifiers
	 */
	specify d_t[] = {
		{'c', __printchar},
		{'s', __printstring},
		{'d', __printdecimal},
		{'u', __printunsign},
		{'i', __printdecimal},
		{'b', __printbin},
		{'o', __printoctal},
		{'x', __printhexs},
		{'X', __printhexc},
		{'\0', NULL}
	};
	if (str[*index] == '%')
	{
		z = 0;
		for (z = 0; z < 9; z++)
		{
			if (str[(*index) + 1] == d_t[z].c)
			{
				nump = nump + d_t[z].f(list);
				(*index) = (*index) + 2;
				return (nump);
			}
		}
		if (str[(*index) + 1] == '%')
		{
			(*index) = (*index) + 2;
			return (__printpercent());
		}
	}
	nump =  _printchar(str[*index]);
	(*index)++;
	return (nump);
}

