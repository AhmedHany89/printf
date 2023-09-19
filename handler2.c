#include "main.h"
/**
 * __printunsign - prints char
 * @list: list of args
 * Return: int number printed
 */
int __printunsign(va_list list)
{
	int nump;

	nump = _printunsign(va_arg(list, unsigned int));
	return (nump);
}
/**
 * __printoctal - prints octal
 * @list: list of args
 * Return: int number printed
 */
int __printoctal(va_list list)
{
	int nump;

	nump = _printoctal(va_arg(list, unsigned int));
	return (nump);
}
/**
 * __printhexs - prints hex
 * @list: list of args
 * Return: int number printed
 */
int __printhexs(va_list list)
{
	int nump;

	nump = _printhexs(va_arg(list, unsigned int));
	return (nump);
}
/**
 * __printhexc - prints HEX
 * @list: list of args
 * Return: int number printed
 */
int __printhexc(va_list list)
{
	int nump;

	nump = _printhexc(va_arg(list, unsigned int));
	return (nump);
}
