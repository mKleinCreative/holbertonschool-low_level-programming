#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string to add on to.
 * @s2: string to attach to s1.
 * Return: (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int i, s1_len, s2_len;
	char *temp;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");
	for (s1_len = 0; s1[s1_len]; s1_len++)
		;
	for (s2_len = 0; s2[s2_len]; s2_len++)
		;
	temp = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (temp == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		temp[i] = s1[i];
	for (i = 0; i < s2_len; i++)
		temp[s1_len + i] = s2[i];
	return (temp);
}
