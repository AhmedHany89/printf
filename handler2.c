#include "main.h"
/**
 * __printunsign - prints char
 * @list: list of args
 * Return: int number printed
 */
int __printunsign(va_list list)
{
	int n;

	n = _printunsign(va_arg(list, unsigned int));
	return (n);
}
/**
 * __printoctal - prints octal
 * @list: list of args
 * Return: int number printed
 */
int __printoctal(va_list list)
{
	int n;

	n = _printoctal(va_arg(list, unsigned int));
	return (n);
}
/**
 * __printhexs - prints hex
 * @list: list of args
 * Return: int number printed
 */
int __printhexs(va_list list)
{
	int n;

	n = _printhexs(va_arg(list, unsigned int));
	return (n);
}
/**
 * __printhexc - prints HEX
 * @list: list of args
 * Return: int number printed
 */
int __printhexc(va_list list)
{
	int n;

	n = _printhexc(va_arg(list, unsigned int));
	return (n);
}
