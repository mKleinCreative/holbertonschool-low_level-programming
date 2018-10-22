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
	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(num_list, int));
		i++;
		if (i < n && (separator))
			printf("%s", separator);
	}
	putchar(10);
	va_end(num_list);
}
