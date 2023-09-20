#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _printbin - function called to print bool
 * @b: number to be written in form of binary in string str
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printbin(int b)
{
	int i;
	int len = 0, r = b, n = b, z, nump = 0;
	char *s;

	if (r < 0)
		len = 32;
	while (r > 0)
	{
		r = r / 2;
		len++;
	}
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (-1);
	memset(s, '\0', (len + 1));
	i = len - 1;
	if (n < 0)
	{
		z = i;
		while (z >= 0)
		{
			s[z] = '1';
			z--;
		}
	}
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
	}
	while (n > 0 || n < 0)
	{
		s[i] = abs(n % 2) + 48;
		n = n / 2;
		i--;
	}
	nump = _writing(s, strlen(s));
	free(s);
	return (nump);
}
