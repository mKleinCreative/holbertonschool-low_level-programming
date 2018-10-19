/**
 * check_string - compares the contents of 2 strings vs wildcards
 * @s1: string to compare.
 * @s2: string with wildcards to compare against.
 * Return: 1 if strings are identical, 0 if not.
 */

int check_string(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (check_string(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (check_string(s1 + 1, s2) || check_string(s1, s2 + 1));
	return (1);
}

/**
 * wildcmp - compares 2 strings and returns 1
 *	if wild cards match up and it can be considered identical
 * @s1: string to compare
 * @s2: string to compare against.
 * Return: 1 if strings are identical, 0 if not.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == 1 && *s2 == '*')
		return (1);
	if (check_string(s1, s2))
		return (1);
	return (0);
}
