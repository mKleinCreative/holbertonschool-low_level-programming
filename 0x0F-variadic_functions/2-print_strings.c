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

	if (separator == NULL)
		return;
	va_start(string_list, n);

	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(string_list, const char *) == NULL)
		{
			printf("(nil)%s", separator);
		} else
		{
			printf("%s%s", va_arg(string_list, const char *), separator);
		}
	}
	printf("%s\n", va_arg(string_list, const char *));
	va_end(string_list);
}
