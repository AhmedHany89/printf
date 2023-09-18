#include <stdio.h>
#include "main.h"
/**
 *_printchar - function called to print char in form of string
 * @c: character to be written in form of string str
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printchar(char c)
{
	int nump = 0;
	char str[1];

	str[0] = c;
	nump = _writing(str, 1);
	return (nump);
}
