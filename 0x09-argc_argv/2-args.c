#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out all arguments given to function
 * @argc: number of arguments given
 * @argv: array of arguemnts given
 * Return: one arguement per line ending with new line.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

