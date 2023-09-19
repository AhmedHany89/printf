#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>
/**
 * hexs - function called to print hex
 * @n: number
 * @y: index
 * @st: string
 * Return: nump of printed chars on succcess or -1 on fail
 */
void hexs(unsigned int n, int y, char *st);

/**
 * _printhexs - function called to print hex
 * @b: number to be written in form of binary in string str
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _printhexs(unsigned int b)
{
	int nump = 0, z = 0, ln = 0;
	unsigned int r = b, n = b;
	char *str;

	while (r > 0)
	{
		r = r / 16;
		ln++;
	}
	str = malloc(sizeof(char) * (ln + 1));
	if (str == NULL)
		return (-1);
	memset(str, '\0', (ln + 1));
	z = ln - 1;
	if (n == 0)
		str[0] = '0';
	hexs(n, z, str);
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
/**
 * hexs - function called to print hex
 * @n: number
 * @y: index
 * @st: string
 * Return: nump of printed chars on succcess or -1 on fail
 */
void hexs(unsigned int n, int y, char *st)
{
	unsigned int arrd[] = {10, 11, 12, 13, 14, 15};
	char arrc[] = {'a', 'b', 'c', 'd', 'e', 'f'};
	int i = 0;

	while (n > 0)
	{
		if ((n % 16) > 9)
			for (i = 0; i <= 5; i++)
			{
				if ((n % 16) == arrd[i])
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
