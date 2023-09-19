#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
/**
 * gethexc - function called to print hex
 * @n: number
 * @y: index
 * @st: string
 * Return: nump of printed chars on succcess or -1 on fail
 */
void hexc(unsigned int n, int y, char *st)
{
	char arrc[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	unsigned int arri[] = {10, 11, 12, 13, 14, 15};
	int i = 0;

	while (n > 0)
	{
		if ((n % 16) > 9)
			for (i = 0; i <= 5; i++)
			{
				if ((n % 16) == arri[i])
					st[y] = arrc[i];
			}
		else
		{
			st[y] = n % 16 + 48;
		}
		n = n / 16;
		y--;
	}
}

/**
 * _printhexc - function called to print hex
 * @b: number to be written in form of binary in string str
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printhexc(unsigned int b)
{
	int len = 0, nump = 0, z = 0;
	unsigned int u = b, n = b;
	char *str;

	while (u > 0)
	{
		u = u / 16;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	z = len - 1;
	if (str == NULL)
		return (-1);
	memset(str, '\0', (len + 1));
	if (n == 0)
		str[0] = '0';
	hexc(n, z, str);
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
