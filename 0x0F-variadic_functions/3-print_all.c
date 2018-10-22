#include "variadic_functions.h"

/**
 * struct format - finds the format of info
 * @flag: flag given to the format struct.
 * @f: call back function for the struct.
 */
typedef struct format
{
	char *flag;
	int (*f)(va_list);
} formatter;

/**
 * print_char - prints a char
 * @a: char to print
 */
void print_char(va_list a)
{
	printf("%c", va(arg(a, int));
}
/**
 * print_int - prints an int
 * @a: int to print
 */
void print_int(va_list a)
{
	printf("%d", va_arg(a, int));
}
/**
 * print_float - prints a float
 * @a: float to print
 */
void print_float(va_list a)
{
	printf("%f", va_arg(a, double));
}
/**
 * print_char - prints a char
 * @a: char to print
 */
void print_string(va_list a)
{
	char *current;
	current = va_arg(val, char *);
	if (!current)
		printf("(nil)");
	printf("%s", a);
}
/**
 * print_all - prints all args passed to function
 * @format: list of args to give data types.
 */

void print_all(const char * const format, ...)
{
	va_list list;
	formatter formats[] = {
		{"c", printf("%c", print_char)},
		{"i", printf("%d", print_int)},
		{"f", printf("%f", print_float)},
		{"s", printf("%c", print_string)},
		{NULL, NULL}
	};
	int i, j;

	j = 0;
	if (format == NULL)
		return;
	va_start(list, format);
	while(format && format[j])
	{
		i = 0
		while (formats[i].flag)
		{
			if (formats[i].flag[0] == format[0])
			{
				(formats[i].f)(va_arg(list, void *);
				 if (format[j + 1])
				 	printf(", ");
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(list);
}
