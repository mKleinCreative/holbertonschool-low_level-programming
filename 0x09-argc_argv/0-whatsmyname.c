#include <stdio.h>
/**
 * main - prints out the name of this file
 * @argc: length of commandline arguments
 * @argv: arguement string passed into function
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}

