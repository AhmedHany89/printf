#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_printstring - function called to write string to writing fn
 * @str: a pointer to string to be written
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printstring(char *str)
{
	int nump = 0;

	if (str == NULL)
		str = "(null)";
	nump = _writing(str, strlen(str));
	return (nump);
}
