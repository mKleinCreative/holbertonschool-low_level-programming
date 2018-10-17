#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print.
 * @f: function that takes a char array and prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
