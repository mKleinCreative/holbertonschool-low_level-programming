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

	for (i = 0; i < n - 1; i++)
		printf("%u%s", va_arg(num_list, unsigned int), separator);
	printf("%u\n", va_arg(num_list, unsigned int));
	va_end(num_list);
}
