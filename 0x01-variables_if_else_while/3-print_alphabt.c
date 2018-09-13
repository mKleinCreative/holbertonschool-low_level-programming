#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: prints the alphabet without q or e (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch < 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

