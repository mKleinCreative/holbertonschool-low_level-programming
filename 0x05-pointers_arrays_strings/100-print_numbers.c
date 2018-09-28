#include "holberton.h"
/**
 * print_number - prints the integer provided
 * @n: int to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	if (n < 10)
	{
		_putchar((n % 10) + '0');
		return;
	}
	else
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
