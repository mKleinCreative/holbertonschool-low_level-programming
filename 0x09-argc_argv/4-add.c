#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - parses and adds all command args that are ints
 * @argc: number of arguements
 * @argv: array of ints to add
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;
	if (argc == 1)
	{
		return (printf("%d\n", 0));
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

