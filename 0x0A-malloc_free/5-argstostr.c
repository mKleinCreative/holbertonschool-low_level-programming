#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all args of program
 * @ac: count of args
 * @av: values of args
 * Return: each argument followed by \n
 */

char *argstostr(int ac, char **av)
{
	char *tmp;
	int i, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	tmp = malloc(sizeof(char) * ac);
	if (tmp == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (length = 0; length < ac; length++)
			tmp[length + i] = av[i][length];
	}
	return (0);
}

