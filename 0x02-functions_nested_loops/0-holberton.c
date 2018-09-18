#include "holberton.h"

/**
 * main - Prints the word "Holberton" to the console. Entry point
 *
 * Return: (Success)
 */

int main(void)
{
	char name[100] = "Holberton";
	int ch;

	for (ch = 0; name[ch] != '\0'; ch++)
		_putchar(name[ch]);
	_putchar('\n');
	return (0);
}
