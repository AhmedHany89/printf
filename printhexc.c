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
void gethexc(unsigned int n, unsigned int y, char *st)
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
	int nump = 0;
	unsigned int y, len = 0, r = b, n = b;
	char *str;

	while (r > 0)
	{
		r = r / 16;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	y = len - 1;
	if (str == NULL)
		return (-1);
	memset(str, '\0', (len + 1));
	if (n == 0)
		str[0] = '0';
	gethexc(n, y, str);
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
