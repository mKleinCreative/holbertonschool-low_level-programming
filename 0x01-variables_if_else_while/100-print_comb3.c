#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (Success)
 */

int main(void)
{
	int num1;
	int num2;

	num2 = 1;

	for (num1 = 0; num1 <= 8 && num2 < 10; num2++)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
		if (num1 != 8)
		{
			putchar(',');
			putchar(' ');
		}
		if (num2 == 9 && num1 != 8)
		{
			num1++;
			num2 = num1;
		}
	}

	putchar('\n');
	return (0);
}
