#include <stdio.h>
#include <stdlib.h>

/**
 * main - parses and adds all command args that are ints
 * @argc: number of arguements
 * @argv: array of ints to add
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	if (argc == 1)
		return (printf("%d\n", 0));
	for (i = 0; i < argc; i++)
	{
		if (*(*(argv) + i) < 30 || *(*(argv) + i) > 39)
		{
			printf("Error\n");
			return (0);
		}
		sum += atoi(argv[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}

