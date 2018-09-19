#include <stdlib.h>
#include <stdio.h>

/**
 * main - The sums of numbers divisible by 3 and 5 under 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum;
	int count;

	count = 0;
	sum = 0;
	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum = count + sum;
			count++;
		} else
			count++;
	}
	printf("%d\n", sum);
	return (0);
}
