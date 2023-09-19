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
	int nump = 0, y;
	/**
	* struct format d_type[] - struct
	* Description: specifiers
	*/
	specify d_type[] = {
		{'c', __printchar},
		{'s', __printstring},
		{'%', __printchar},
		{'d', __printdecimal},
		{'i', __printdecimal},
		{'b', __printbin},
		{'u', __printunsign},
		{'o', __printoctal},
		{'x', __printhexs},
		{'X', __printhexc},
		{'\0', NULL}
	};
	if (str[*index] == '%')
	{
		y = 0;
		while (y < 10)
		{
			if (str[(*index) + 1] == d_type[y].c)
				nump = nump + d_type[y].f(list);
			y++;
		}
		if (str[(*index) + 1] == '%')
			nump = nump + __printpercent();
		(*index)++;
	}
	else
		nump = nump + _printchar(str[*index]);
	(*index)++;
	return (nump);
}
