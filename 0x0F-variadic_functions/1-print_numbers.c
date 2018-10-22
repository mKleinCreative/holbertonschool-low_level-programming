#include "variadic_functions.h"
/**
 * print_numbers - prints all numbers passed to function
 * @separator: string printed between numbers
 * @n: numbers to print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%u%s", va_arg(num_list, int), separator);
		if (separator == NULL || *separator == '\0')
			continue;
	}
	printf("%u\n", va_arg(num_list, int));
	va_end(num_list);
}
