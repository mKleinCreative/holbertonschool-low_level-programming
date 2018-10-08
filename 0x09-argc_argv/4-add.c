#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: (Success)
 */

int main(int argc, char argv[])
{
	int sum, i;

	sum = 0;
	if (argc <= 1)
		return printf("%d\n", 0);
	for (i = argc - 1; i >= 0; i--)
	{
		if (argv[i] >= 30 && argv[i] <= 39)
			sum += atoi(argv[i]) + sum;
		else
		{
			printf("Error\n");
		}
	}
	return (0);
}

