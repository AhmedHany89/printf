#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _printoctal - function called to print bool
 * @b: number to be written in form of binary in string str
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printoctal(unsigned int b)
{
	unsigned int u = b, n = b;
	int i, len = 0, nump = 0;
	char *str;

	while (u > 0)
	{
		u = u / 8;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	i = len - 1;
	if (str == NULL)
		return (-1);
	memset(str, '\0', (len + 1));
	if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[i] = (n % 8) + 48;
		n = n / 8;
		i--;
	}
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
