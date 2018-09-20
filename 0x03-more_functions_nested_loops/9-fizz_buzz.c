#include <stdio.h>
#include <stdlib.h>

/**
 * main - changes numbers into either fizz, buzz or fizzbuzz
 * Description: Multiples of 3 are changed to Fizz,
 * multiples of 5 are changed to buzz, multiples of both are FizzBuzz
 * Return: (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("%s ", "FizzBuzz");
		} else if (i % 5 == 0)
		{
			printf("%s ", "Buzz");
		} else if (i % 3 == 0)
		{
			printf("%s ", "Fizz");
		} else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
