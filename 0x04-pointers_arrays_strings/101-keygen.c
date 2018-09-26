#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * keygen - creates random ascii values that add up to 2772
 *
 */

int main(void)
{
	int random, seed;

	srand(time(NULL));
	random = 0;
	for (seed = 0; seed <= (2772 - 64); seed += random)
	{
		random = (rand() % (90 - 65)) + 65;
		putchar(random);
	}
	printf("%c", 2772 - seed);
	return (0);
}
