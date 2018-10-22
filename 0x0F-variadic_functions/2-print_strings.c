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

	va_start(string_list, n);

	for (i = 0; i < n;)
	{
		item = va_arg(string_list, char*)
		if (item == NULL)
		{
			printf("(nil)");
		} else
		{
			printf("%s%s", item, separator);
		}
		i++;
		if (i < n && separator)
			printf("%s", separator);
			if (i == n - 1)
				printf("\n");
	}
	va_end(string_list);
}
