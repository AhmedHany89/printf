#include "main.h"
/**
 * __printchar - prints char
 * @list: list of args
 * Return: int number printed
 */
int __printchar(va_list list)
{
	int nump;

	nump = _printchar(va_arg(list, int));
	return (nump);
}
/**
 * __printpercent - prints percent
 * @list: list of args
 * Return: int number printed
 */
int __printpercent(void)
{
	int nump;

	nump = _printchar('%');
	return (nump);
}
/**
 * __printstring - prints string
 * @list: list of args
 * Return: int number printed
 */
int __printstring(va_list list)
{
	int nump;

	nump = _printstring(va_arg(list, char *));
	return (nump);
}
/**
 * __printdecimal - prints decimal
 * @list: list of args
 * Return: int number printed
 */
int __printdecimal(va_list list)
{
	int nump;

	nump = _printdecimal(va_arg(list, int));
	return (nump);
}
/**
 * __printbin - prints binary
 * @list: list of args
 * Return: int number printed
 */
int __printbin(va_list list)
{
	int nump;

	nump = _printbin(va_arg(list, int));
	return (nump);
}
