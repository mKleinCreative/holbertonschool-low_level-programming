#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * main - executes a calculator function
 * Return: calculated function
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (!(get_op_func(argv[2])))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d", get_op_func(argv[2])(a, b));
	return (0);
}
