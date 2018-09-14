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
	int num3;

	num2 = 1;
	num3 = 2;
	for (num1 = 0; num1 < 8 && num2 < 9 && num3 < 10; num3++)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');
		if (num1 != 7)
		{
			putchar(',');
			putchar(' ');
		}
		if (num3 == 9)
		{
			num2++;
			num3 = num2;
			if (num2 == 8)
			{
				num1++;
				num2 = num1 + 1;
				num3 = num2;
			}
		}
	}

	putchar('\n');
	return (0);
}
