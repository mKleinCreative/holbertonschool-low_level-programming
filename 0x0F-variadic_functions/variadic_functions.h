#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct format - finds the format of info
 * @flag: flag given to the format struct.
 * @f: call back function for the struct.
 */
typedef struct format
{
	char *flag;
	void (*f)(va_list);
} formatter;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_int(va_list);
void print_char(va_list);
void print_float(va_list);
void print_string(va_list);
#endif
