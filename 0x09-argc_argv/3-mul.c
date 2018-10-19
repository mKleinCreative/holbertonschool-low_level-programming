#include <stdio.h>
#include <stdlib.h>

/**
 * main - takes two numbers as an arguement and multiplies them
 * @argc: number of arguments given
 * @argv: numbers to multiply
 * Return: (Success)
 */

int main(int argc, char *argv[])
{
	int first, second, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	product = first * second;
	printf("%d\n", product);
	return (0);
}
