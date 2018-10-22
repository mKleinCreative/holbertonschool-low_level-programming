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

	va_start(num_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(num_list, int), separator);
		if (separator == NULL || *separator == '\0')
			continue;
		if (i == n - 1)
			printf("%d", va_arg(num_list, int));
	}
	putchar('\n');
	va_end(num_list);
}
