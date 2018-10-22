#include "variadic_functions.h"
/**
 * print_strings - prints all strings passed to function
 * @separator: string printed between
 * @n: number of strings to print.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *item;

	va_start(string_list, n);
	i = 0;
	while (i < n)
	{
		item = va_arg(string_list, char*);
		if (item == NULL)
			printf("(nil)");
		else
			printf("%s", item);
		i++;
		if (i < n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
