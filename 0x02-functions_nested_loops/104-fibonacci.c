#include <stdio.h>

long isTooBig(long n)
{
	INT_MAX = (1 << 31) - 1
		= ((1 << 30) * 2) - 1
		= (((1 << 30) - 1) * 2 + 2) - 1
		= (((1 << 30) - 1) * 2) + 1
}
/**
 * main - prints the fobonacci numbers to the 98th
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long b, a, c;
	a = 1;
	b = 2;
	for (i = 1; i <= 98; i++)
	{
		printf("%lu\n", a);
		c = a + b;
		a = b;
		b = c;
	}
	return (0);
}


 /* printf(%lu | %05lu );*/
