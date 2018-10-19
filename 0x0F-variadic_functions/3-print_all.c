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
 * Return: character printed
 */
char print_char(char a)
{
	printf("%c", a);
	return (0);
}
/**
 * print_int - prints an int
 * @a: int to print
 * Return: int printed
 */
int print_int(int a)
{
	printf("%d", a);
	return (0);
}
/**
 *  print_float - prints a float
 * Return: float printed
 */
float print_float(float a)
{
	printf("%f", a);
	return (0);
}
/**
 *  print_char - prints a char
 * Return: character printed
 */
char print_string(char *a)
{
	printf("%c", *a);
	return (0);
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
		{NULL, printf("(nil)"}
	};
	unsigned int i;

	if (format == NULL)
		return;
	va_start(list, format);
	while(formats[i].flag != NULL)
	{
		if (formats[i].flag[0] == formatt[0])
			return ((formats[i].f)(va_arg(list, void *));
		i++;
	}
	printf("%c\n", va_arg(list, char));
	va_end(list);
}
