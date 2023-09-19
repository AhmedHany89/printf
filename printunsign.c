#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _printunsign - to print decimal for d or i  after %
 * Description: to print decimal for d or i  after %
 * @n: arg number
 * Return: number of printed characters
 */
int _printunsign(unsigned int n)
{
	int len = 0, h = 0, nump = 0;
	char *str;
	unsigned int i = n, z = n;

	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (-1);
	h = len - 1;
	memset(str, '\0', (len + 1));
	if (n == 0)
		str[0] = 48;
	while (z > 0)
	{
		str[h] = (z % 10) + 48;
		z = z / 10;
		h--;
	}
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
