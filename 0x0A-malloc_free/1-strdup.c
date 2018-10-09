#include <stdio.h>
#include <stdlib.h>

/**
 * strdup - duplicates a string
 * @str: string to duplicate in memory.
 * Return: pointer to the string that has been duplicated.
 */

char *_strdup(char *str)
{
	int i, str_len;
	char *dupe;

	if (str == NULL)
		return (NULL);
	for (str_len = 0; str[str_len]; str_len++)
		;
	dupe = malloc(sizeof(char) * str_len);

	for (i = 0; i < str_len; i++)
		dupe[i] = str[i];
	return (dupe);
}

