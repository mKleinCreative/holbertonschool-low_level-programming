#include "holberton.h"
#include <stdio.h>
/**
 * main - prints out number of args passed to function followed by new line
 * @argv: arguements passed in.
 * @argc: number or arguments passed
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	if (*argv)
		printf("%d\n", argc - 1);
	return (0);
}

