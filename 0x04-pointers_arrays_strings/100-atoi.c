#include "holberton.h"

/**
 * _atoi - converts an array to an int
 * @s: string to convert.
 * Return: converted int or 0 if not ints.
 */
int _atoi(char *s)
{
	int i, j, neg;
	int total;

	total = 0;
	neg = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 59)
			break;
		if (s[i] <= 57 && s[i] >= 48)
			total = total * 10 + s[i] - 48;
	}
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[i] == 59)
			break;
		if (s[j] == 45)
			neg = neg * -1;
	}
	if (neg < 0)
		return (total * -1);
	else
		return (total);
}
