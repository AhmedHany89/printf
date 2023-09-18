#include <stdio.h>
#include <unistd.h>

/**
 *_writing -writes the charachters to stdout
 * @str: a pointer to string to be written
 * @ln: the number of charachters to write
 * Return: nump of printed chars on succcess or -1 on fail
 */
int _writing(char *str, int ln)
{
	int nump = 0;

	if (str == NULL)
		return (-1);
	nump = write(1, str, ln);
	return (nump);
}
