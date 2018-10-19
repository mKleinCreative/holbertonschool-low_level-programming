#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its main function
 * Return: list of opcodes
 */
int main(int argc, char *argv[])
{
	unsigned char bytes;
	unsigned int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (argv[1] < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; atoi(argv[1]) > i ; i++)
	{
		printf("%x ", *((unsigned char *)(&main + i)));
	}
}
