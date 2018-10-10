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
	int i, k, length;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
			length += 1;
	}
	tmp = malloc(sizeof(char) * (length + ac + 1));
	if (tmp == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			tmp[length] = av[i][k];
			length++;
		}
		tmp[length] = '\n';
		length++;
	}
	tmp[length] = '\0';
	return (tmp);
}

