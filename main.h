#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _specifier(va_list list, const char *str, int *index);
int _printchar(char c);
int _printstring(char *str);
int _printdecimal(int n);
int _writing(char *str, int ln);

#endif
