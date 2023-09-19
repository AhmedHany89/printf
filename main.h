#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct specifiers - list of types of arguments passed to the function
 * @c: The operator
 * @f: The function associated
 * Description: specifiers
 */
typedef struct specifiers
{
	char c;
	int (*f)();
} specify;
int _printf(const char *format, ...);
int _specifier(va_list list, const char *str, int *index);
int _printchar(char c);
int _printstring(char *str);
int _printbin(int b);
int _printdecimal(int n);
int _writing(char *str, int ln);
int _printunsign(unsigned int b);
int _printoctal(unsigned int b);
int _printhexc(unsigned int b);
int __printchar(va_list list);
int _printhexs(unsigned int b);
int __printstring(va_list list);
int __printoctal(va_list list);
int __printunsign(va_list list);
int __printdecimal(va_list list);
int __printpercent(void);
int __printhexs(va_list list);
int __printbin(va_list list);
int __printhexc(va_list list);

#endif
