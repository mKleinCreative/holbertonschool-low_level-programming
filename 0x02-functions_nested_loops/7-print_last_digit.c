#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @n: an integer taken as a parameter to print the last digit of.
 * Return: the last digit of 'n' (Success)
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = (n % 10);
	if (last_digit < 0) 
		last_digit = last_digit * -1;

	_putchar(last_digit + '0');
	return last_digit;
}
