#include "main.h"
/**
 * __printchar - prints char
 * @list: list of args
 * Return: int number printed
 */
int __printchar(va_list list)
{
	int x;

	x = _printchar(va_arg(list, int));
	return (x);
}
/**
 * __printpercent - prints percent
 * Return: int number printed
 */
int __printpercent(void)
{
	int x;

	x = _printchar('%');
	return (x);
}
/**
 * __printstring - prints string
 * @list: list of args
 * Return: int number printed
 */
int __printstring(va_list list)
{
	int x;

	x = _printstring(va_arg(list, char *));
	return (x);
}
/**
 * __printdecimal - prints decimal
 * @list: list of args
 * Return: int number printed
 */
int __printdecimal(va_list list)
{
	int x;

	x = _printdecimal(va_arg(list, int));
	return (x);
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
