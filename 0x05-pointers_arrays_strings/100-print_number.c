#include "holberton.h"
/**
 * print_number - prints the integer provided
 * @n: int to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = n  * -1;
	} else {
		num = n;
	}
	if (num  < 10)
	{
		_putchar((num  % 10) + '0');
		return;
	} else
	{
		print_number(num  / 10);
	}
	_putchar((num  % 10) + '0');
}
