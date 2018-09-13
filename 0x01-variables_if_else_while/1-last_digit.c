#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return (Success)
 */

int main(void)
{
	int n;
	char string[] = "Last digit of";
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit < 6 && lastDigit != 0)
		printf("%s %d is %d and is less than 6 and not 0", string, n, lastDigit);
	else if (lastDigit > 5)
		printf("%s %d is %d and is greater than 5", string, n, lastDigit);
	else if (lastDigit == 0)
		printf("%s %d is %d and is 0", string, n, lastDigit);

	return (0);
}
