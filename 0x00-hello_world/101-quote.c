#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return:  (Success)
 */

int main(void)
{
	write(0, "\"and that piece of art is useful\" - Dora Korpar, 2015-10-19", 59);
	putchar('\n');
	return (0);
}
