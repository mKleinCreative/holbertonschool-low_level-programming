#include <stdio.h>
/**
 * first - prints a string before the main function executes.
 */

void first(void) __attribute__ ((constructor));
void first(void)
{
	printf("You're beat! and yet, you must allow,\
			\nI bore my house upon my back!\n");
}
