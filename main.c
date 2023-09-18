#include <stdio.h>
#include "main.h"
int main(void)
{
	int i = 0;
	i = _printf("this is numb: %d\n", -123);
	_printf("%d", i);
	return (0);
}
