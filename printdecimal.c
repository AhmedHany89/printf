#include <stdio.h>
#include "main.h"
/**
 * _printdecimal - to print decimal for d or i  after %
 * Description: to print decimal for d or i  after %
 * @n: arg number
 * Return: number of printed characters
 */
int _printdecimal(int n)
{
	int nump = 0;
	char *str;
	int i = n, len = 0, y = 0;

	while (i > 0)
	{
		i = i / 10;
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	i = n;
	y = len - 1;
	if (str == NULL)
		return (-1);
	memset(str, '\0', (len + 1));
	while (i > 0)
	{
		str[y] = (i % 10) + 48;
		i = i / 10;
		y--;
	}
	nump = _writing(str, strlen(str));
	free(str);
	return (nump);
}
