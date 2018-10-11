#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string at beginning
 * @s2: string at end
 * @n: number of bytes of s2 to add to s1
 * Return: pointer pointing towards space in memory with
 *	new string and null terminated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len, s2_len, i;
	char *joined;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;
	if (n < s2_len)
		s2_len = n;
	joined = malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (joined == NULL)
		return (NULL);
	for (i = 0; i < s1_len + s2_len; i++)
	{
		if (i < s1_len)
			joined[i] = s1[i];
		else
			joined[i] = s2[i - s1_len];
	}
	joined[i] = '\0';
	return (joined);
}

