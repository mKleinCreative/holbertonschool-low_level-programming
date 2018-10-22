#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: a static variable that contains a number.
 * Return: the sum of all of n's args
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num_list;
	unsigned int i, sum;

	va_start(num_list, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(num_list, unsigned int);
	va_end(num_list);
	return (sum);
}

